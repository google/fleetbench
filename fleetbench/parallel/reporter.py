# Copyright 2024 The Fleetbench Authors
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""This file supports reporting benchmark results and saves to a JSON file."""

from collections.abc import Sequence
import json
import os
from typing import Any
from typing import TypeAlias

from absl import logging
import numpy as np
import pandas as pd


ContextInfo: TypeAlias = dict[str, Any]
BenchmarkRuntimeInfo: TypeAlias = dict[str, Any]


# TODO: b/408469060 - combine these two functions?
def AggregateContext(input_dir: str) -> dict[str, Any]:
  """Iterates through all run files and aggregates "context" data.

  Iterate all files under the input directory and aggregate the "Context"
  information. In particular, "date" field will be the first one. "Load_avg"
  will be averaged across all files. The remaining fields in "context" should
  be the same across all files. If there is anything that is different from the
  others, a warning will be logged.

  Args:
    input_dir: The input directory containing the benchmrk run data.

  Returns:
    - aggregated_data (dict): The aggregated data, or None if errors
    occurred.
  """
  aggregated_data = {}
  load_avg_lists = []
  first_file = True

  for filename in os.listdir(input_dir):
    filepath = os.path.join(input_dir, filename)

    with open(filepath, "r") as f:
      data = json.load(f)
    context = data["context"]

    if first_file:
      aggregated_data = context.copy()
      first_file = False
      load_avg_lists.append(aggregated_data.pop("load_avg"))

    else:
      load_avg_lists.append(context.pop("load_avg"))

      for key, value in context.items():
        if key == "date":
          aggregated_data["date"] = min(aggregated_data["date"], value)
          continue
        if key not in aggregated_data or aggregated_data[key] != value:
          logging.warning(
              "Warning: Inconsistent value for '%s' in %s: %s",
              key,
              filename,
              value,
          )

  if aggregated_data and load_avg_lists:
    avg_load_avg = [sum(x) / len(load_avg_lists) for x in zip(*load_avg_lists)]
    aggregated_data["load_avg"] = avg_load_avg

  return aggregated_data


def AggregateFinalContext(contexts: Sequence[ContextInfo]) -> ContextInfo:
  """Aggregates the final context data from all repetitions.

  We select the first context data as the final context data, and calculate the
  average load_avg across all repetitions.

  Args:
    contexts: A list of context data from all repetitions.

  Returns:
    - aggregated_context (dict): The aggregated context data.
  """

  load_avg_lists = []
  for context in contexts:
    if "load_avg" in context:
      load_avg_lists.append(context.pop("load_avg"))

  result = contexts[0]
  result["load_avg"] = [
      sum(x) / len(load_avg_lists) for x in zip(*load_avg_lists)
  ]
  return result


def AggregateFinalData(
    data_list: list[BenchmarkRuntimeInfo],
) -> list[BenchmarkRuntimeInfo]:
  """Aggregates the final data from all repetitions.

  Args:
    data_list: A list of data dictionaries from all repetitions.

  Returns:
    - aggregated_data (list): The aggregated data, with benchmark results for
      each benchmark.
  """
  data = {}

  metrics = []
  # Group the data by benchmark name
  for data_dict in data_list:
    for benchmark_name, benchmark_data in data_dict.items():
      if benchmark_name not in data:
        data[benchmark_name] = []
      data[benchmark_name].append(benchmark_data)
      if not metrics:
        metrics = list(benchmark_data.keys())

  if not metrics:
    raise ValueError(
        "No metric keys found in the data. Can't generate final report."
    )

  # Aggregate data for each metric
  aggregated_data = []
  for benchmark_name, benchmark_data_list in data.items():
    cur_data = {}
    for metric in metrics:
      if metric == "name":
        cur_data[metric] = benchmark_name
      elif metric.endswith("_std"):
        # Calculate the combined standard deviation such as wall_time_std,
        # cpu_time_std, etc.
        variances = [data[metric] ** 2 for data in benchmark_data_list]
        total_variance = np.mean(variances)
        cur_data[metric] = np.sqrt(total_variance)
      else:
        # Average the other metric values such as wall time, cpu time, etc.
        cur_data[metric] = np.mean(
            [data[metric] for data in benchmark_data_list]
        )
    aggregated_data.append(cur_data)

  return aggregated_data


def GenerateBenchmarkReport(
    df: pd.DataFrame,
    perf_counter_df: pd.DataFrame | None,
) -> pd.DataFrame:
  """Generates a DataFrame of aggregated benchmark results.

  Args:
    df: A DataFrame of benchmark results.
    perf_counter_df: A DataFrame of performance counter results.

  Returns:
    A DataFrame of aggregated benchmark results.
  """

  # Remove "fleetbench (" prefix and ")" suffix
  df["Benchmark"] = (
      df["Benchmark"].astype(str).str.replace(r".* \((.*)\)", r"\1", regex=True)
  )

  grouped_results = (
      df.groupby("Benchmark")
      .agg(
          Count=("WallTimes", "count"),
          Mean_Wall_Time=("WallTimes", "mean"),
          Mean_CPU_Time=("CPUTimes", "mean"),
          Mean_Iterations=("Iterations", "mean"),
          Wall_Time_std=("WallTimes", "std"),
          CPU_Time_std=("CPUTimes", "std"),
          Iterations_std=("Iterations", "std"),
      )
      .round(3)
  )
  grouped_results["Mean_Iterations"] = grouped_results[
      "Mean_Iterations"
  ].astype(int)

  # We only show the following columns in the console report.
  # More metrics can be founded in the dumped JSON file.
  selected_columns = [
      "Count",
      "Mean_Wall_Time",
      "Mean_CPU_Time",
  ]

  # Combine perf_counter_df and benchmark run results on the same
  # "benchmark" entry.
  if perf_counter_df is not None:
    grouped_results = pd.merge(
        grouped_results, perf_counter_df, on="Benchmark", how="left"
    )
    selected_columns.extend(perf_counter_df.columns.tolist())

  print(grouped_results[selected_columns].to_string())
  return grouped_results


def _SaveFile(
    file_name: str, data: list[BenchmarkRuntimeInfo], context: ContextInfo
) -> None:
  """Saves benchmark results to a JSON file.

  Args:
    file_name: The name of the file to save the data to.
    data: A list of dictionaries containing the benchmark results.
    context: A dictionary containing the context information.

  Returns:
    None.

  Raises:
    IOError: An error occurred while writing the JSON data.
    json.JSONDecodeError: An error occurred while decoding the JSON data.
  """
  try:
    with open(file_name, "w") as json_file:
      json.dump(
          {"context": context, "benchmarks": data}, json_file, indent=4
      )  # Serialize and write with indentation
      logging.info("Summary results successfully written to %s", file_name)
  except (IOError, json.JSONDecodeError) as e:
    print(f"Error writing JSON data: {e}")


def SaveBenchmarkResults(
    output_dir, df: pd.DataFrame
) -> tuple[ContextInfo, BenchmarkRuntimeInfo]:
  """Saves benchmark results to a JSON file.

  Args:
    output_dir: The directory where the output files are stored.
    df: A DataFrame of benchmark results.

  Returns:
    A tuple containing:
      - context (dict): The aggregated context data.
      - data (dict): The benchmark results, with benchmark name as keys and
        benchmark data as values.
  """

  file_name = os.path.join(output_dir, "results.json")

  # Convert DataFrame to a list of dictionaries (one for each row)
  # Rename the column "Benchmark" to "Name"
  # TODO: This only works for open source benchmark version. If there
  # is need to support internal version, we need to change the column name.

  # We use "Benchmark" column as the index, and rename it to "name"
  df.index.name = "name"
  df = df.rename(
      columns={
          "Mean_Wall_Time": "real_time",
          "Mean_CPU_Time": "cpu_time",
          "Mean_Iterations": "iterations",
          "Wall_Time_std": "real_time_std",
          "CPU_Time_std": "cpu_time_std",
          "Iterations_std": "iterations_std",
      }
  )
  data = df.reset_index().to_dict(orient="records")

  context = AggregateContext(output_dir)
  _SaveFile(file_name, data, context)

  # The second return is a remapped version of the data, where the outer
  # dictionary is keyed by benchmark name, and the inner dictionary contains
  # the benchmark results. This is useful for aggregating results
  # across multiple repetitions.
  return context, {d["name"]: d for d in data}


def GenerateFinalReport(
    output_dir: str,
    context_list: list[ContextInfo],
    data_list: list[BenchmarkRuntimeInfo],
    repetitions: int,
) -> None:
  """Generates a final report for the parallel benchmark run.

  This function takes the output directory, a list of context dictionaries,
  a list of data dictionaries, and the number of repetitions as input. It
  aggregates the context and data from all repetitions, and saves the final
  report to a JSON file.

  Args:
    output_dir: The directory where the output files are stored.
    context_list: A list of dictionaries containing the context information for
      each repetition.
    data_list: A list of dictionaries containing the benchmark results for each
      repetition.
    repetitions: The number of repetitions of the benchmark.

  Returns:
    None.
  """

  output_file = os.path.join(output_dir, "results.json")
  if repetitions == 1:
    # we simply copy the single run report to the final report.
    input_file = os.path.join(output_dir, "run_0", "results.json")
    if os.path.exists(input_file):
      with open(input_file, "r") as infile, open(output_file, "w") as outfile:
        outfile.write(infile.read())
    else:
      logging.warning(
          "Warning: results.json not found in %s",
          os.path.join(output_dir, "run_0"),
      )
    return

  context = AggregateFinalContext(context_list)
  data = AggregateFinalData(data_list)
  _SaveFile(output_file, data, context)

  # TODO: b/408469060 - print the selected columns in the console report.

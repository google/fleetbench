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

import json
import os
from typing import Any

from absl import logging
import pandas as pd


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
      df["Benchmark"]
      .astype(str)
      .str.replace(r"fleetbench \((.*)\)", r"\1", regex=True)
  )

  grouped_results = (
      df.groupby("Benchmark")
      .agg(
          Count=("WallTimes", "count"),
          Mean_Wall_Time=("WallTimes", "mean"),
          Mean_CPU_Time=("CPUTimes", "mean"),
          Mean_Iterations=("Iterations", "mean"),
      )
      .round(3)
  )
  grouped_results["Mean_Iterations"] = grouped_results[
      "Mean_Iterations"
  ].astype(int)

  # Combine perf_counter_df and benchmark run results on the same
  # "benchmark" entry.
  if perf_counter_df is not None:
    grouped_results = pd.merge(
        grouped_results, perf_counter_df, on="Benchmark", how="left"
    )

  print(grouped_results.to_string())
  return grouped_results


def SaveBenchmarkResults(output_dir, df: pd.DataFrame) -> None:
  """Saves benchmark results to a JSON file for predictiveness analysis."""

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
      }
  )
  data = df.reset_index().to_dict(orient="records")

  context = AggregateContext(output_dir)

  try:
    with open(file_name, "w") as json_file:
      json.dump(
          {"context": context, "benchmarks": data}, json_file, indent=4
      )  # Serialize and write with indentation
      logging.info("Summary results successfully written to %s", file_name)
  except (IOError, json.JSONDecodeError) as e:
    print(f"Error writing JSON data: {e}")

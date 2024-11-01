The csv files in this directory have the following structure.

The first line always contains the size distribution, the second line the
overlap probability, and the third line the alignments.

The format of the entries is x:y, which means that x occurs with probability y.
For example, in the second line, "0:0.990775,1:0.00922544" means that there is
no overlap (0) with probability 0.990775, and that there is overlap (1) with
probability with 0.00922544. Note that for that particular line, one of the
numbers is redundant, as they sum to one; implementing it this way made parsing
easier as it is consistent with the other two lines.

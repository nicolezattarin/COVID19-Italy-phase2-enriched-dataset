#!/bin/sh

# This bash script creates a slightly altered copy of the colors_daily.csv dataset for the fix_region
# script. The starting colors_daily.csv file is the same file that is in the ../../region_colors
# directory.

rm cleaned_colors_daily.csv
tail -n 192 colors_daily.csv | sed -e 's/,/ /g' >> cleaned_colors_daily.csv

# Where 192 is the number of records in the colors_daily.csv dataset.
# This command removes the header and swaps commas with blank spaces, to make the fix_region script,
# which is written in C++, much easier to code and understand.

# This short script deliberately leaves the original file untouched and creates one with a different
# name to avoid potential confusion. Also, the script leaves everything the same if it runs more
# than once.

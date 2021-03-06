## regions-daily.csv
This folder contains the **regions-daily.csv** dataset. In particular, this dataset focuses on the so called "phase 2" of the containment of the COVID-19 pandemic in Italy: "phase 2" refers to the timeframe starting from November 2020 and continuing up to the day of writing this file (so at least to the end of May 2021). During this timeframe, the Italian government adopted ascending regional restrictions identified by the colors white, yellow, orange and red. For further information, see [REGIONS_RESTRICTIONS.md](https://github.com/nicolezatta/covid19-phase2-data-Italy/tree/main/region_colors/REGIONS_RESTRICTIONS.md) in the regions_color folder.

The regions.daily.csv dataset contains information on a _daily temporal basis_ divided for each region of Italy. The fields in the file are as follows:

1. The date indicating the day the entry refers to (YYYY-MM-DD);

2. The name of the region the entry refers to;

3. Number of new cases;

4. Number of people who recovered from COVID-19;

5. Number of deaths caused by COVID-19;

6. Number of tests that were made;

7. Percentage of tests that were positive;

8. Restriction color.

This dataset could prove useful to visualize data over a time series. An example of this can be found in the [regions_trend_colors.pdf](https://github.com/nicolezatta/covid19-phase2-data-Italy/tree/main/results/images/regions_trend_colors.pdf) file in the images subfolder of the results folder. The plots in that file were produced using Gnuplot.

The source for all data in this folder except for the restriction colors was the public Github repository of "Dipartimento della Protezione Civile" (Italian Civil Protection) one can find [here](https://github.com/pcm-dpc/COVID-19/tree/master/dati-regioni). The same repository also contains other data.

The restriction colors were instead taken from the colors\_daily.csv dataset one can find in the region\_colors folder. Please refer to the [REGIONS_RESTRICTIONS.md](https://github.com/nicolezatta/covid19-phase2-data-Italy/tree/main/region_colors/REGIONS_RESTRICTIONS.md) file in the region\_colors folder for further information about it.

## Scripts subfolder
This subfolder includes all the commented code and scripts that were used to produce the regions-daily.csv file, in case any curious user wanted to know exactly how the data were processed starting from the source. Note that the comments in the **fix_region.cpp** code within the scripts subfolder also contain information about some errors that were found in the source data (hence this file is worth a look if one should ever refer to the same source).

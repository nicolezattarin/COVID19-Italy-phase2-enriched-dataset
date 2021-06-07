## colors_daily.csv
The **colors_daily.csv** dataset contains information about the restriction regime in every region on each day since the start of such restrictions. The fields are as follows:

* The date indicating the day the entry refers to (YYYY-MM-DD).

* There are 21 fields corresponding to all the 21 Italian regions, sorted in alphabetical order. Each of these field contains the restriction color that was imposed on that specific region on that specific date (the possibilities are "White", "Yellow", "Orange" or "Red"). The exact order of the regions can be found in the header line of the file.

* Finally there are 4 fields that respectively contain the total number of "white" regions, "yellow" regions, "orange" regions and "red" regions on that specific date. Obviously the sum of these 4 numbers must always be 21.

Originally, the source for this dataset was a public Github repository, but the dataset was not up to date and upon further examination also contained some errors. For this reason, we decided to keep the same field structure, but we updated it and double checked every single entry, scraping information from the official [site](https://www.gazzettaufficiale.it/attiAssociati/1/?areaNode=17) (which regrettably is only available in Italian language) of Gazzetta Ufficiale containing all restriction decrees.

## color_changes.csv
The **color_changes.csv** dataset contains the same data from the colors_daily.csv dataset, but presented in a different way. The fields are as follows:

1. The Italian region under the imposed restriction regime in a given time period;

2. The restriction color imposed by the Italian Ministry of Health (the possibilities are "White", "Yellow", "Orange" or "Red");

3. The date of start of a given restriction (YYYY-MM-DD);

4. The date of end of the given restriction (YYYY-MM-DD).

The file is organized so that the regions are sorted in alphabetical order, and the entries relative to each region are sorted in chronological order (following the time series of the applied restrictions). The source for the color\_changes.csv dataset is in fact the colors\_daily.csv dataset.

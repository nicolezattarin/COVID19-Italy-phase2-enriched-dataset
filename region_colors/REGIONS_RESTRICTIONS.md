# What do the colors mean?
We provide data related to the restrictions imposed by the Italian government during the "2nd phase" period that extends from November 2020 to the day writing this file (so at least to the end of May 2021). Such restrictions were applied in an attempt of containing the spread of the COVID19 epidemic.

A compartimental strategy was adopted, differentiating the imposed restriction in each region according to stress on the health system, number of new cases, intensive care occupancy and many other indicators (the list of which can be found in the [INDICATORS.md](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/reports_ISS/INDICATORS.md) file in the reports_ISS folder).

The names of the different imposed regimes are, in ascending order of restraint, "white", "yellow", "orange" and "red". The "white" zone corresponds to a level of restraint close to "normality", with open restaurants and shops, and no limitations of movement across the entire region; on the opposite side of the spectrum, in the "red" zone the majority of shops are closed and commercial activities are heavily reduced, on top of travels between cities being forbidden (except for emergencies). Moreover, sush restrictions have been subject to change overtime, so updated informations about the restrictions can be found on the [site](http://www.salute.gov.it/portale/nuovocoronavirus/dettaglioFaqNuovoCoronavirus.jsp?lingua=english&id=230#11) of the Italian Ministry of Health.

## colors_daily.csv
The **colors_daily.csv** dataset contains information about the restriction regime in every region on every date since the start of such restrictions. The fields are as follows:

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

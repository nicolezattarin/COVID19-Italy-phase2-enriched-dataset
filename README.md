# covid19-phase2-data-italy

## Authors 

## Repository organisation
- daily_ region_ data/ a full dataset with different epidemiological data
- region_colors/ datasets regarding the restrictions imposed by the government
- reports_ISS/ datasets with risk indicators from ISS weekly reports
- results/ report of our main results and corresponding plots
- deaths: deaths per province per month

## Sources
- [Gazzetta Ufficiale della Repubblica Italiana](https://www.gazzettaufficiale.it/home)
- ISS
- ISTAT
- [Presidenza del Consiglio dei Ministri - Dipartimento della Protezione Civile](https://github.com/pcm-dpc)

### Introduction
From November on, in Italy, the spread of COVID19 pandemic made necessary to introduce restrictions, in order to reduce the impact of this disease on public health.

## Datasets

### Daily region data
The datasets available focus on the daily evolution of epidemiological data during the so called "phase 2" of COVID19 pandemic. For instance, we provide daily evolution of parameters such as new cases registered, deaths, and hospitalisations. This kind of data allow us to study the spread of pandemic through time-series; you can see an example of possible analysis in [RESULTS](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/results/RESULTS.md).

For a full description of the datasets see: [DAILY_DATA](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/daily_region_data/DAILY_DATA.md)

### Imposed restriction regimes
The "phase 2" period was characterised by regional restrictions imposed by the government. There are four levels of restrictions, that are indicated in ascending order by the colors "white", "yellow", "orange" and "red". We provide two different datasets that are solely focused on such restrictions, and keep track of the restriction color in each region every day.

For a full description of the datasets see: [REGIONS_RESTRICTIONS](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/region_colors/REGIONS_RESTRICTIONS.md)

### Indicators for risk assessment
In report_ISS we provide a dataset for every weekly report taken by the ISS, which is the Italian authority in the health field. Every week the ISS provides a report with all the indicators that are necessary to describe the pandemic situation in every region, thus to decide the right policy to apply locally.

For  a full description of the datasets see: [INDICATORS](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/reports_ISS/INDICATORS.md)

### Deaths
The file deaths.csv contains a comparison between the mean deaths in 2015-2019 and 2020 deaths. The deaths are aggregated per month per province, indeed the header is organized as:

- CodProv (Province ISTAT code) 
- deaths per month in the period 2015-2019
- deaths per month in 2020
- deaths per month identified as covid cases (for the second semester of 2020)

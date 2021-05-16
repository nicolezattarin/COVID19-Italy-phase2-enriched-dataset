# covid19-phase2-data-italy


## Authors 

## Repository organisation
- reports_ISS/ datasets with risk indicators from ISS weekly reports
- deaths: deaths per province per month
- daily_ region_ data / a full dataset with different epidemiological data
- results/ report of our main results and corresponding plots

## Sources
- ISS
- Protezione Civile
- ISTAT

### Introduction

From November on, in Italy, the spread of Covid pandemic made necessary to introduce restrictions, in order to reduce the impact of this disease on public health.

## Datasets
### Region_colors.csv

We provide data related to the restrictions imposed by the Italian government during the period November 2020-March 2021 in attempt of containing the spread of the novel coronavirus.

It was adopted a compartimental strategy,  differentiating the imposed restriction according to the stress on the health system, the number of new cases, IT occupancy and many other indicators (the full list of parameters used to describe the epidemiological situation in a given region could be found here (in italian): [decree of the Ministry of Health](https://www.trovanorme.salute.gov.it/norme/renderNormsanPdf?anno=2020&codLeg=77099&parte=1%20&serie=null). 

The name of the different regimes imposed are, in ascending order of strength of restraint, 'White'-'Yellow'-'Orange'-'Red'. The 'White' zone corresponds to something close to 'normality' with open restaurants and shops and having no limitations of movement across the entire region; on the other hand, in the 'Red' zone the majority of shops are closed and commercial activities are heavily reduced, while inter-city movements are forbidden (except for emergencies). A complete description of the restrictions could be found at [Ministry of health](http://www.salute.gov.it/portale/nuovocoronavirus/dettaglioFaqNuovoCoronavirus.jsp?lingua=english&id=230#11).


The CSV file contains the following columns: 'Region'-'Restriction'-'Start'-'End'

- 'Region': The italian particular region under the restriction regime imposed in a given time period

- 'Restriction': The restriction type according to the italian COVID_19 containment system. In ascending order of strength of restraint, the possibilities are: 'White'-'Yellow'-'Orange'-'Red'.

- Start: the date of start of a given restriction (YYYY-MM-DD)

- End:the end date of a given restriction (YYYY-MM-DD)

The file is organized so that Regions are sorted in a descending alphabetically order and for each region rows are chronologically ordered following the time series of the applied restrictions.
Source: [covid-19-zone on GitHub](https://github.com/aborruso/covid-19-zone/blob/main/covid-19-zone.csv).

### Indicators for risk assessment

In Report_ISS we provide a dataset for every weekly report taken by the ISS, that is the Italian authority in the health field. Every week the ISS provides a report with all the indicators that are necessary to describe the pandemic situation in every region, thus to decide the right policy to apply locally.

Here you can find a full description of the datasets:
[INDICATORS](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/reports_ISS/INDICATORS.md
)

### Daily Region data


### Deaths


The file deaths.csv contains a comparison between the mean deaths in 2015-2019 and 2020 deaths. The deaths are aggregated per month per province, indeed the header is organized as:

- CodProv (Province ISTAT code) 
- deaths per month in the period 2015-2019
- deaths per month in 2020
- deaths per month identified as covid cases (for the second semester of 2020)

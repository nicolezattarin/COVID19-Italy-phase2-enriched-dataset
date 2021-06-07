# covid19-phase2-data-italy

## Description

This repository contains compiled and curated datasets on COVID-19 epidemiology at the regional level in Italy, in the date range November 2020-May 2021. The repository is designed to enable data analysis on the effects of different kinds of restrictions on the spreading of the infection as well as on the efficacy of estimators used to predict when restrictions should be applied. The data sets are explicitly designed to give access to this data to non-Italian speakers, and all the readme files are in English. 

The repository was the outcome of the Computational Physics Laboratory Course taught in March-May 2021 at the Physics Department of the University of Milan
(Teachers: Marco Cosentino Lagomarsino, Marco Gherardi; Data Challenge Supervisors: Federico Bassetti, Fabrizio Capuani, Pietro Cicuta, Jacopo Grilli)
For more information about the course, see this preprint about the 2020 edition
https://arxiv.org/abs/2104.09394


## Authors 
Marco Cosentino Lagomarsino (University of Milan and IFOM Foundation, Milan)  
Matteo Citterio (University of Milan)  
Marco Gherardi  (University of Milan)  
Dave Parmegiani (University of Milan)  
Nicole Zattarin (University of Milan)

## Repository organisation
The repository is divided into the following folders:

- daily_ region_ data/ (a full dataset with different kinds of standard epidemiological data, taken from the Italian Civil Protection GitHub)
- region_colors/ (compiled datasets regarding the restrictions imposed by the Italian government over the considered period)
- reports_ISS/ (compiled datasets with risk indicators from the Italian National Institute of Health - ISS - weekly reports)
- deaths/  (deaths per province per month, from the Italian Statistics Institute ISTAT)
- results/ (report of a few results we obtained with this data set, and corresponding plots)



## Datasets
### Introduction
From November 2020  in Italy, the spread of COVID-19 pandemic made it necessary to introduce restrictions, in order to reduce the impact of this disease on public health.

### 1. Daily region data
The datasets available in the folder "daily_ region_ data" focus on the daily evolution of epidemiological data during the so called "phase 2" of COVID19 pandemic (November 2020-May 2021). For instance, we provide daily evolution of parameters such as new cases registered, deaths, and hospitalisations. This kind of data allow a user to study the spread of the pandemic through time-series; you can see an example of possible analysis in [RESULTS](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/results/RESULTS.md).

For a full description of the datasets see: [DAILY_DATA](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/daily_region_data/DAILY_DATA.md)

### 2. Restrictions

The folder "region_colors/" contains data on the regional restrictions imposed by the government over the period 2020-11-06 - 2021-05-16. We provide two different datasets that are solely focused on such restrictions, and keep track of the restriction color in each region every day.

For a full description of the datasets see: [REGIONS_RESTRICTIONS](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/region_colors/REGIONS_RESTRICTIONS.md)

**Description of the restriction regimes**

We describe below the restrictions imposed by the Italian government during the "phase 2" period that extends from November 2020 to May 2020. Such restrictions were applied in an attempt of containing the spread of the COVID-19 epidemic. 

The Ministry of Health and the ISS in October 2020 published a “Toolbox” for Public Health Authorities responding to the SARS-CoV-2 outbreak in Italy, based on the 8 WHO Strategic Pillars of COVID- 19 response. The aim of this project was to prepare a strategy for the autumn-winter season, as described in the following document:
[Prevention and response to COVID-19: evolution of strategy and planning in the transition phase for the autumn-winter season](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/COVID%2019_%20strategy_ISS_MoH.pdf).

A compartmental strategy was adopted, differentiating the imposed restrictions in each region according to stress on the health system, number of new cases, intensive care occupancy and many other indicators (the list of which can be found in the [INDICATORS.md](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/reports_ISS/INDICATORS.md) file in the reports_ISS folder).

The names of the different imposed regimes or "zones" are, in ascending order of restraint, "white", "yellow", "orange" and "red". The "white zone" corresponds to a level of restraint close to "normality", with open restaurants and shops, and no limitations of movement across the entire region; on the opposite side of the spectrum, in the "red" zone the majority of shops are closed and commercial activities are heavily reduced, on top of travels between cities being forbidden (except for emergencies). Moreover, such restrictions have been subject to change over time, and updated information about the restrictions can be found on the [site](http://www.salute.gov.it/portale/nuovocoronavirus/dettaglioFaqNuovoCoronavirus.jsp?lingua=english&id=230#11) of the Italian Ministry of Health.

![](results/images/zones_restrictions.png)

We describe below the restrictions in every zone referring to the period covered by our datasets. Starting from May 2021, when we are assembling this repository, the restrictions are being gradually released. For instance see (in Italian) [Coronavirus, cosa si può fare e cosa no nelle zone rosse, gialle e arancioni](https://www.ilsole24ore.com/art/coronavirus-mappa-e-restrizioni-zona-previste-nuovo-dpcm-ADDS4B0?refresh_ce=1).

- _White zone restrictions_: night curfew moves from 10pm to 11.30pm, until 5am. Outside curfews, people are allowed to move freely across neighboring regions that are also white zones. School attendance is re-established when possible, while public transports may carry passengers up to half of their capacity. Restaurants open until 11 pm while bars are allowed to stay open until 9 pm. Shopping malls and stores are open. Museums are allowed to reopen on weekends. Gyms, theaters, cinemas and cultural centers may reopen gradually under such restrictions, but they did not open in the period considered in this dataset.

- _Yellow zone restrictions_: Curfew is applied from 11 pm until 5 am. Outside of curfews, movements are allowed only within the same region. Travelling to other regions was allowed in November to mid-December 2020, but after that moving between yellow regions has been forbidden until 26 April 2021. School attendance is guaranteed for elementay and middle schools and at 50% capacity for high schools, public transports may carry passengers at half capacity. Restaurants can be open until 18 pm and until 11 pm for delivery/takeaway. It is only allowed to sit with a maximum of four people per table, unless the people sitting at the same table live together. Shopping malls are closed on weekends, while theaters and cinemas stay closed. Gyms, theaters, cinemas and cultural centers may reopen gradually, but they were never open in the considered period.

- _Orange zone restrictions_: Curfew is applied as in yellow zone, and otherwise movements are allowed only within the same municipality. For towns with less than 5000 inhabitants it is possible to travel within a distance of 30km from the town. School attendance and public transport is regulated as in yellow zone. Restaurants are open until 11pm but only for delivery/takeaway. All other restrictions are equal to yellow zone. 

- _Red zone restrictions_: Curfew is applied from 10pm to 5am, but even outside of curfews movements within the same municipality are only allowed for work, study or health reasons. Outdoors physical activity is allowed only if it is individual and in the vicinity of home. Schools attendance is guaranteed just up to 1st grade of middle school, high school students must stay home, as well as university students. Restaurants and bars and cafes are closed. Takeaway is allowed until 10pm and food delivery is allowed without any restrictions. Shops are closed, except for grocery stores, alimentari, pharmacies, newsstands, tabacchis and other shops that sell essential goods.



### 3. Indicators for risk assessment
The folder "report_ISS" provides a compiled dataset for every weekly report published by the ISS, which is the Italian authority in the health field. Every week the ISS provides a report with all the indicators that are necessary to describe the pandemic situation in every region, thus to decide the right policy to apply locally. These reports are available just in Italian and as PDF documents, and they are all collected [here](https://www.iss.it/monitoraggio-settimanale).

These parameters refer to quantity such as the reproduction index Rt, hospitalizations and contact tracing capability. They played a key role in guiding the Italian Government to formulating policies. The indicators should describe the evolution of pandemic, the ability of the Italian health-care system to face the consequences, and the degree of spreading of the disease. 

For a more detailed description of the datasets see the document: [INDICATORS](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/reports_ISS/INDICATORS.md)

### 4. Deaths
The file "deaths.csv" in the folder "deaths" contains a comparison between the mean deaths in 2015-2019 and 2020 deaths, taken from the Italian Institute of Statistics (ISTAT). The deaths are aggregated per month per province. This data set is organized as follows (see also the file header):

- CodProv (Province ISTAT code) 
- Province name 
- deaths per month in the period 2015-2019 (whole year)
- deaths per month in 2020 (whole year)
- deaths per month identified as covid cases (for the second semester of 2020)


## Sources
- [Gazzetta Ufficiale della Repubblica Italiana](https://www.gazzettaufficiale.it/home)
- [ISS](https://www.iss.it/web/iss-en)
- [ISTAT](https://www.istat.it/en/archivio/240106)
- [Presidenza del Consiglio dei Ministri - Dipartimento della Protezione Civile](https://github.com/pcm-dpc)

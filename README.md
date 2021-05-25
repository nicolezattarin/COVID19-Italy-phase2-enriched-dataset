# covid19-phase2-data-italy

## Description

This repository contains complied and curated datasets on COVID-19 epidemiological data at the regional level in Italy in the date range XXXX 2020-XXXX 2021 [MCL: fill dates here], and is designed to enable data analyses on the effects of different kinds of restrictions on the spreading of the infection and on the efficacy of estimators to predict when restrictions should be applied. The data sets are explicitly designed to give access to non-Italian speakers, and all the readme files are in English. 

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
- daily_ region_ data/ (a full dataset with different kinds of standard epidemiological data, taken form the Italian Civil Protection GitHub)
- region_colors/ (compiled datasets regarding the restrictions imposed by the Italian government over the considered period)
- reports_ISS/ (compiled datasets with risk indicators from the Italian National Institute of Health - ISS - weekly reports)
- results/ (report of a few results we obtained with this data set, and corresponding plots)
- deaths: (deaths per province per month, from the Italian Statistics Institute ISTAT)

## Sources
- [Gazzetta Ufficiale della Repubblica Italiana](https://www.gazzettaufficiale.it/home)
- [ISS](https://www.iss.it/web/iss-en)
- [ISTAT](https://www.istat.it/en/archivio/240106)
- [Presidenza del Consiglio dei Ministri - Dipartimento della Protezione Civile](https://github.com/pcm-dpc)

### Introduction
From November 2020  in Italy, the spread of COVID-19 pandemic made necessary to introduce restrictions, in order to reduce the impact of this disease on public health.

## Datasets

### Daily region data
The datasets available in the folder "daily_ region_ data" focus on the daily evolution of epidemiological data during the so called "phase 2" of COVID19 pandemic [MCL:FILL INTERVAL OF DATES HERE]. For instance, we provide daily evolution of parameters such as new cases registered, deaths, and hospitalisations. This kind of data allow a user to study the spread of the pandemic through time-series; you can see an example of possible analysis in [RESULTS](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/results/RESULTS.md).

For a full description of the datasets see: [DAILY_DATA](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/daily_region_data/DAILY_DATA.md)

### Imposed restriction regimes
The folder "region_colors/" contains data on the regional restrictions imposed by the government over the period [MCL date interval here]. There are four levels of restrictions, that are indicated in ascending order by the colors "white", "yellow", "orange" and "red". We provide two different datasets that are solely focused on such restrictions, and keep track of the restriction color in each region every day.

For a full description of the datasets see: [REGIONS_RESTRICTIONS](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/region_colors/REGIONS_RESTRICTIONS.md)

[MCL: in this text we need to explain roughly how the different restrictions are implemented, face masks, curfew, mobility restrictions etc]

[MCL:I pasted some text below => it needs to be allocated / cleaned]

[MCL Let's add this ISS document to the repository and mention it in the readme files ]
https://www.iss.it/documents/5430402/0/COVID+19_+strategy_ISS_MoH+%281%29.pdf/f0d91693-c7ce-880b-e554-643c049ea0f3?t=1604675600974
[the best is to dowload the file and add it to the repository, because link will eventually expire]

The White Zone

At the moment no regions are is classified as a white zone (update 24/05/21).

The government has introduced a new “White Zone” in the hope of giving a signal for the future. Italian regions are classified as white zones when the Rt index is below 1 and there are 50 or fewer weekly cases of Covid-19 for every 100,000 people, for three weeks in a row.  These regions are the safest and have less restrictions than other regions. The restrictions for the regions in the white zone are as follows: 

   The night curfew moves from 10pm to 11.30pm. That means you’re not allowed to move around from 11.30pm till 5am.  
    Restaurants are allowed to serve until 11pm. Food delivery is allowed nonstop without any restrictions.
    Bars and pubs are allowed to stay open till 9pm.
    Museums are allowed to reopen on weekends. 
    Travelling to second homes in different regions is allowed, as long as those regions are white, yellow or orange. You must show proof of ownership and can only go with your family.
    Shopping malls will soon be able to reopen on weekends.
    Gyms, theaters, cinemas and cultural centers will be able to reopen gradually.

The Yellow Zone

From May 24, all Italian regions will become yellow zones.

Italian regions are classified as yellow zones when the Rt index is below 1.

These regions are safer according to the 21 parameters that are being monitored. The restrictions for the regions in the yellow zone are as follows:

   You’re prohibited to move around from 11pm till 5am. In any case, the government recommends you to limit movements as much as possible. However, you are allowed to move in between regions in the yellow zone 
    Traveling to other yellow regions is allowed. More about the green pass to travel to other regions below.
    Museums are allowed to reopen on weekdays and only by reservation on weekends. 
    Restaurants, bars, pubs, bakeries and gelaterias are reopening until 11pm, but only with outdoor seating and delivery/takeaway. They will be able to operate on weekends and bank holidays too, following the same opening hours 5am – 11pm. In any of the above-mentioned venues, you are only allowed to sit with a maximum of four people per table, unless you are living with the people you’re sitting with. Takeaway is allowed till 11pm for restaurants and 6pm for bars. Food delivery is allowed nonstop without any restrictions.
    Shopping malls will reopen on weekends from May 22
    Theaters and cinemas will reopen with strict protocols (pre-assigned seats, in compliance with distancing rules. The capacity cannot exceed 50% of the maximum, up to 1000 spectators outdoors and 500 indoors for each room).
    Outdoor swimming pools have reopened; Gyms are reopening on May 24; skiing slopes reopening on May 22.

The Orange Zone

Italian regions are classified as orange zones when the Rt index is more than 1. At the moment no regions are classified as a orange zone (update 24/05/21). These regions are at an intermediate risk according to the 21 parameters that are being monitored. The restrictions for the regions in the orange zone are as follows:

   You’re prohibited to move around from 10pm till 5am. The government recommends to limit movements within your city as much as possible.
    Traveling in between regions and cities is prohibited, unless it’s for work, study or health reasons. For towns with less than 5000 inhabitants it is possible to travel outside the town without restrictions within a distance of 30km from the town.
    Traveling to second homes in different regions is allowed. You must show proof of ownership and can only go with your family. Restrictions regarding special provinces might apply:
    Restaurants and bars are to stay closed. Takeaway is allowed till 10pm and food delivery is allowed nonstop without any restrictions.
    Shops, hair salons and beauty centers are to stay open. 
    Shopping malls are to stay closed on weekends and public holidays except for grocery stores, alimentari, pharmacies, newsstands, tabacchis and other shops that sell essential goods that are inside the shopping mall.
    Schools to reopen: only high schools will be in 50% presence.

The Red Zone

Italian regions are classified as red zones when the Rt index is 1.25 or above. These regions are at the highest risk according to the 21 parameters that are being monitored and will be facing local lockdowns. At the moment no regions are classified as a red zone (update 24/05/21). The restrictions for the regions in the red zone are as follows:

   Traveling in between regions and cities is prohibited. Moving around your own city is not allowed, unless it’s for work, study or health reasons. 
    You may work out outdoors but only by yourself and in the vicinity of your home.
    Restaurants and bars and cafes are to stay closed. Takeaway is allowed till 10pm and food delivery is allowed nonstop without any restrictions.
    Shops are to stay closed, except for grocery stores, alimentari, pharmacies, newsstands, tabacchis and other shops that sell essential goods.
    Beauty salons, hairdressers and barber shops remain closed.
    Visiting a private home is not allowed anymore.
    Traveling to a second home is not allowed, even if the house is located in a white, yellow or orange region.
    School restrictions are being loosened: kindergartens and elementary schools will reopen. High schools to remain closed.


### Indicators for risk assessment
The folder "report_ISS" provides a compiled dataset for every weekly report published by the ISS, which is the Italian authority in the health field. Every week the ISS provides a report with all the indicators that are necessary to describe the pandemic situation in every region, thus to decide the right policy to apply locally. 

[MCL also point to the ISS document mentioned above here]

For a more detailed description of the datasets see: [INDICATORS](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/reports_ISS/INDICATORS.md)

### Deaths
The file "deaths.csv" contains a comparison between the mean deaths in 2015-2019 and 2020 deaths, taken from the Italian Institute of Statistics (ISTAT). The deaths are aggregated per month per province. This data set is organized as follows (see also the file header):

- CodProv (Province ISTAT code) 
- deaths per month in the period 2015-2019
- deaths per month in 2020
- deaths per month identified as covid cases (for the second semester of 2020)

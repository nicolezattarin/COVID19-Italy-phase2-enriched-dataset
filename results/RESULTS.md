
## Orange zone effectiveness
**Introduction**

Let us consider all the dates in which one between the 'Red'-'Orange'-'Yellow' restriction has been imposed in every italian region and a suitable time lag of 14 days with whom evaluate the results of the restriction (the 14 days time shift could be seen as the gap between the exposure to the virus and the outbreak of the symptons in an individual https://www.scienzainrete.it/articolo/covid-19-nelle-regioni-italiane-solo-rosso-funziona-se-dato-tempo/associazione-italiana-di).

In order to quantify the effectiveness of a particular restriction lut us define the observable *SNP normalized* as the deviation of new positives (the difference between the number of today's new positives and yesterday's) normalized over today's new positives.

**Conclusions**

<img src="images/histograms.png"  width="800"/>  

In the previous figure the effectiveness of a given restriction evaluated with the *SNP normalized* observable is straightforwardly compared to the one computed for the Orange zone having on the x-axis a particular value of the observable and on the y-axis (splitted in two) the probability of count of days in which a specific SNP value has been observed.

Given the large number of data, a T-test would produce extremely low p-values for both the histograms (from left to right: p1 ~ 4.e(-151), p2 ~ 8.e(-160), which allow to conclude with a low significance level that the differences between the averages of the compared restrictions are statistically significant, i.e. different restrictions have different effectiveness.

## Restriction transitions 
**Introduction**

Let us consider all the impositions of the Orange restriction with the exception of the Christmas period, in which restrictions were imposed regardless of the epidemiological situation but rather due to an attempt of mantaining the social distancing during the holydays.

**Conclusions**


<img src="images/restrictions.png"  width="800"/>  


It has been observed that 63.8% of the times that the Orange zone led to the yellow one. In addition to this, from the image it seems that the more an Orange zone persists, the more likely it will become yellow. This might suggest that the orange zone had an effectiveness in reducing the epidemiological risk, especially considering the fact that the occurency of the sequencies containing the orange zone has been for the 46.5% of the times Y-O-Y and for the 32.5% Y-O-R (remaining 2.3% of R-O-R and 18.6% of R-O-Y) highlighting the fact that the previous observation it's not simply the consequence of the descent of the epidemiological curve. 

## Yellow and red zones before Christmas
**Introduction**

Let us consider the 7 days moving average of the IC occupancy and of the new cases registered daily. 
It's documented that there's a natural time to observe the results of a restrictive policy. Thus we introduce a 11 days shifting, since after this time we expect that the 97.5% of the exposed population manifested symptoms ([CDC, Interim Clinical Guidance for Management of Patients with Confirmed Coronavirus Disease](https://www.cdc.gov/coronavirus/2019-ncov/hcp/clinical-guidance-management-patients.html)). 


We consider the log return of such quantities (INSERT EQUATION), such observable
measures the daily variation of a quantity, it is independent by the size of the population so that we can compare dataset of different Italian regions.
Therefore we consider data of all regions, exception made by Molise, Valle d'Aosta, since datasets present irregular oscillations, and the islands, since their epidemiological situation is affected by their geographical collocation.

A first result can be gained observing the red and yellow zones before Christmas holiday. In fact at that time restriction became independent from local situations, in order to *prevent* a possible increasing of cases due to people's desire to share time with their relatives. 

**Conclusions**

<img src="images/logreturn_IC.png"  width="500"/>  <img src="images/logreturn_new_cases.png"  width="500"/>  


## Deaths in the second semester of 2020 vs previous years

**Introduction**

Let us focus on the Province of Milan, one of the most affected by Covid Pandemic, we now compare the mean deaths in the years 2015-2019 and deaths in 2020. We are focusing on the second semester in order to analyse the second wave of Pandemia.
We assume that the mean mortality in this province is the one reported in the years 2015-19.


**Conclusions**
From the plot below we can conclude that in the 2020's last trimester the mean deaths of 2015-19 plus the deaths due to covid disease exceed significantly the number of deaths per capita of 2020. On the other hand, during the previous months reported values almost coincide, because during summer months the spreading of pandemia was substantially negligible. 

In order to better understand the impact of Covid disease on mortality we refer to what is reported by ISS in [Impact of Covid pandemia on mortality: cause of death in people who died affected by Sars-Cov-2](https://www.istat.it/it/files//2020/07/Report_ISS_Istat_Cause-di-morte-Covid.pdf).

According to this report, Covid-19 directly causes death just in the 89% of people died with this disease. In addiction the set of people who died with Covid and because of it can have a non-trivial intersection with the group of people who would have died anyway. Accordingly, ISS reports that the 71.8% died with at least another possible cause of death, beyond Covid.

Introducing this two scalings we see that the sum of usual mortality and death, that we suppose are really caused by Covid, still exceed the observed mortality in 2020, but the values tend to be closer. 

We conclude that a non-trivial fraction of people who died with Covid disease would probably have hight probability to die regardless pandemia. 


<img src="images/deaths_milan.png"  width="500"/>  


#METTERE UNA ZONA BIANCA E UN HEADER SPIEGANDO CHE DATI SONO E CHE COSA SONO LE DIVERSE RESTRIZIONI

The following are the data related to the restrictions imposed by the italian government during the period Novermber 2020-March 2021 in attempt of containing the spread of the novel coronavirus. It was adopted a compartimental strategy,  differentiating the imposed restriction according to the stress on the health system, the number of new cases, IT occupancy and many other indexis (the full list of parameters used to describe the epidemiological situation in a ginven region could be found here (in italian):https://www.trovanorme.salute.gov.it/norme/renderNormsanPdf?anno=2020&codLeg=77099&parte=1%20&serie=null). The name of the different regimes imposed are, in ascending order of strength of restraint, 'White'-'Yellow'-'Orange'-'Red'. The 'White' zone corresponds to something close to 'normality' with open restaurants and shops and having no limitations of movement across the entire region; on the other hand, in the 'Red' zone the majority of shops are closed and commercial activities are heavily reduced, while inter-city movements are forbidden (except for emergencies). A complete description of the restrictions could be found here (in english):http://www.salute.gov.it/portale/nuovocoronavirus/dettaglioFaqNuovoCoronavirus.jsp?lingua=english&id=230#11.

The CSV file contains the following columns: 'Region'-'Restriction'-'Start'-'End'

*)'Region': The italian particular italian region under the restriction regime imposed in a given time period

*)'Restriction': The restriction type according to the italian COVID_19 containment system. In ascending order of strength of restraint, the possibilities are: 'White'-'Yellow'-'Orange'-'Red'.

*)Start: the date of start of a given restriction (YYYY-MM-DD)

*)End:the end date of a given restriction (YYYY-MM-DD)

The file is organized so that Regions are sorted in a descending alphabetically order and for each region rows are chronologically ordered following the time series of the applied restrictions.
Source:'https://github.com/aborruso/covid-19-zone/blob/main/covid-19-zone.csv'

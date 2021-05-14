#!/bin/sh
# This bash script simply reiterates the single fix_region script for all regions.
rm fixed_*.csv

## MCL 
## one could do a one liner
for i in `cat region_list.dat`; do ./fix_region $i ; done 
## where region_list.dat is a one-column file with the region list  
## END MCL

./fix_region Abruzzo
./fix_region Basilicata
./fix_region Calabria
./fix_region Campania
./fix_region Emilia-Romagna
./fix_region Friuli_Venezia_Giulia
./fix_region Lazio
./fix_region Liguria
./fix_region Lombardia
./fix_region Marche
./fix_region Molise
./fix_region P.A.Bolzano
./fix_region P.A.Trento
./fix_region Piemonte
./fix_region Puglia
./fix_region Sardegna
./fix_region Sicilia
./fix_region Toscana
./fix_region Umbria
./fix_region Valle_Aosta
./fix_region Veneto

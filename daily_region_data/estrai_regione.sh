#!/bin/sh
# Scrivere il nome della regione come argomento dello script
regione=$1
rm $regione.csv
#echo "\$1 data+1, \$2 ricoverati, \$3 TI, \$4 ospedalizzati totali, \$5 quarantena domiciliare, \$6 positivi totali, \$7 variazione positivi, \$8 nuovi positivi, \$9 totale guariti, \$10 totale deceduti, \$11 casi da sospetto diagnostico, \$12 casi da monitoraggio, \$13 totale casi, \$14 totale tamponi, \$15 casi testati, \$16 nuovi TI. Dal 01-15 in poi, \$17 totale positivi al test molecolare, \$18 totale positivi al test antigenico rapido, \$19 tamponi molecolari totali, \$20 tamponi antigenici rapidi totali." > $regione.csv 
awk -v name=$regione 'BEGIN{FS=","}
	{if($4==name){print $1,$7,$8,$9,$10,$11,$12,$13,$14,$15,$16,$17,$18,$19,$20,
			    $22,$25,$26,$27,$28}}' cleaned-dpc-covid19-ita-regioni.csv | 
# La sintassi -v di awk prima del prog permette di passare all'ambiente awk una variabile
# dell'ambiente bash (step altrimenti illecito).
# Non prendo le colonne con le note, e lo script richiede una cancellatura manuale di tutte le virgole
# da tutte le note dal file d'appoggio (o originale) per la regione desiderata.
	#sed -e 's/-//g' |
	sed -e 's/T17:00:00//g' | sed -e 's/T18:00:00//g' >> $regione.csv

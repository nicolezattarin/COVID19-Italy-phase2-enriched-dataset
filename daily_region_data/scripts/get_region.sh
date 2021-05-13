#!/bin/sh
# This bash script extracts and collects all records for a specific region from the cleaned source file.
# This script requires the region one wants to extract's name as the argument.
# Please note that: Emilia-Romagna needs to be spelled Emilia-Romagna, Friuli Venezia Giulia needs
# to be spelled Friuli_Venezia_Giulia and Valle d'Aosta needs to be spelled Valle_Aosta.
region=$1
rm $region.csv
#echo "Date+1,Hospitalized with symptoms,Intensive care,Hospitalized total,Home quarantine,Positives total,Total positives difference,New positives,Overall total recovereds,Overall total deaths,Cases from diagnostic suspicion,Cases from screening,Overall total cases,Overall total tests,Overall number of tested people,New intensive cares,Overall total cases from molecular tests,Overall total cases from quick antigenic tests,Overall total molecular tests,Overall total quick antigenic tests" > $regione.csv 
awk -v name=$region 'BEGIN{FS=","}
		     {if($4==name){print $1,$7,$8,$9,$10,$11,$12,$13,$14,$15,$16,$17,$18,$19,$20,$22,
					 $25,$26,$27,$28}}' cleaned-dpc-covid19-ita-regioni.csv | 
sed -e 's/T17:00:00//g' | sed -e 's/T18:00:00//g' >> $region.csv
# The -v syntax before awk's prog allows to pass a bash environment variable to the awk environment,
# something which otherwise wouldn't be allowed.
# This script removes the "notes" fields, but it requires for all commas to be manually deleted from
# all notes beforehand. This has already been done in the given cleaned source file.
# This script technically leaves a blank space as the field separator, and the reason is to make the
# next script, fix_region written in C++, much easier to code and understand.
# Keep in mind that the source file keeps track of the date by using the 00:00 hour of the following
# day, so once this script deletes the midgnight notation what's left is the date+1 so to speak.

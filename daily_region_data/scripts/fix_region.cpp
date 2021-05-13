#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// This program (once compiled) needs a region name as the argument and that region extracted file
// in the directory, so one needs to execute the get_region script first.
// This program also requires the extracted region file to not have any empty field, so that's why
// all empty fields are replaced with zeros in the cleaned source file.
// Finally, this program needs the cleaned_colors_daily file in the directory, so one needs to execute
// the clean_colors script first.
 
// When executed, this program creates a "fixed" copy of the extracted region file
// with fewer and more compact fields. Mainly, this program will add a field for the restriction color
// for that specific region on every single date.
// Remember that the date in the extracted region files is actually +1, so we are going to use
// the dates from the colors_daily file.

// Please note that: Emilia-Romagna needs to be spelled Emilia-Romagna, Friuli Venezia Giulia needs
// to be spelled Friuli_Venezia_Giulia and Valle d'Aosta needs to be spelled Valle_Aosta.


// We have found some errors in the source file, and we will now list them:

// There are drops in the overall total number of tests in: Marche on 2021-01-24 of 12'043;
// Piemonte on 2020-12-16 of 215'581; Valle d'Aosta on 2020-12-02 of 6'386.

// There are drops in the overall total number of recovereds in:
// Campania on 2021-01-15 of 1; Liguria on 2021-04-05 of 89;
// Marche on 2020-12-13 of 344; Molise on 2020-12-25 of 1;
// P.A.Bolzano on 2020-12-24 of 1'282; P.A.Bolzano on 2021-02-02 of 94;
// P.A.Bolzano on 2021-02-09 of 1'265; Valle d'Aosta on 2020-12-27 of 3.

// There's a drop in the overall total number of deaths in Campania
// which doesn't track deaths on 2021-01-15 (it's considered like a drop of 0).

// On 2021-03-29 Sicilia doesn't track any data, so it's considered as a drop of tests, recovereds,
// deaths and even new cases of 0.

// In the afore mentioned occasions, the data is simply estimated to be the average of the two
// adjacent days (which is then added to the overall total, together with the drop difference).
// There probably also are leap "upwards", but they can not realistically be distinguished (nor fixed).
// It is strongly suggested to keep a critical eye and to watch out for potential outliers.

// On 2020-12-24 in P.A.Bolzano there's a discrepancy between the new cases and the number of cases of
// the previous day. This error is so intrisic we couldn't think of an hotfix.

int main(int argc, char**argv){
	if(argc!=2){
		cout<<"Pass <region> (without the .csv)"<<endl;
		return -1;
	}

	// T stands for tests, R stands for recovereds and D stands for deaths.
	// The "hold"s are ausiliary variables.
	fstream file_input, file_output;
	int which_region, hold, currentcases, newcases, Thold, Rhold, Dhold;
	int lastpreviousT, lastpreviousR, lastpreviousD;
	string color, holdstring, Date[171];
	int Current_cases[171], New_cases[171], T_Cumulative[171], T_daily[171];
	int R_Cumulative[171], R_daily[171], D_Cumulative[171], D_daily[171];
	float Tpercentage;
	// The number of elements of the arrays is given by the number of records
	// in the colors_daily dataset.

	string Region[21]={"Abruzzo","Basilicata","Calabria","Campania","Emilia-Romagna",
			   "Friuli_Venezia_Giulia","Lazio","Liguria","Lombardia","Marche","Molise",
			   "P.A.Bolzano","P.A.Trento","Piemonte","Puglia","Sardegna","Sicilia",
			   "Toscana","Umbria","Valle_Aosta","Veneto"};
	holdstring=argv[1];
	for(int j=0; j<21; j++){
		if(Region[j]==holdstring) which_region=j;
	}

	file_input.open(holdstring+".csv",ios::in);
	if(file_input.fail()){
		cout<<"Couldn't open the extracted region file."<<endl;
		return -2;
	}

	// The number of iterations is the number of days since the start of the pandemic (included)
	// in Italy to the desired final day of the time serie (included), which in our case is
	// the final day of the colors_daily dataset. Keep in mind the dates in the region file are +1.
	for(int i=0; i<428; i++){
		file_input>>holdstring>>hold>>hold>>hold>>hold>>currentcases>>
			    hold>>newcases>>Rhold>>Dhold>>
			    hold>>hold>>hold>>Thold>>
			    hold>>hold>>hold>>hold>>hold>>hold;
		if(i==256){
		// The lastprevious variables will be used to calculate the daily data for
		// the very first day with color restrictions.
		// The last day before the introduction of color restrictions is the 257th one
		// (since the start of the pandemic in Italy), but i starts from 0 so i=256.
			lastpreviousR=Rhold;
			lastpreviousD=Dhold;
			lastpreviousT=Thold;
		}
		if(i>256){
		// The fields for tests, recovereds and deaths in the source are overall cumulative
		// counters, so first we load the cumulative values and then we will calculate all the
		// values for each day instead.
			Current_cases[i-257]=currentcases;
			New_cases[i-257]=newcases;
			R_Cumulative[i-257]=Rhold;
			D_Cumulative[i-257]=Dhold;
			T_Cumulative[i-257]=Thold;
		// Here start the flags to fix the drops in the cumulative counters:
			if(which_region==9 && i>335) T_Cumulative[i-257]+=18636;
			if(which_region==13 && i>296) T_Cumulative[i-257]+=229074;
			if(which_region==16 && i>399) T_Cumulative[i-257]+=18951;
			if(which_region==19 && i>282) T_Cumulative[i-257]+=6762;
			if(which_region==3 && i>326) R_Cumulative[i-257]+=971;
			if(which_region==7 && i>406) R_Cumulative[i-257]+=259;
			if(which_region==9 && i>293) R_Cumulative[i-257]+=735;
			if(which_region==10 && i>305) R_Cumulative[i-257]+=2;
			if(which_region==11 && i>304) R_Cumulative[i-257]+=1396;
			if(which_region==11 && i>344) R_Cumulative[i-257]+=349;
			if(which_region==11 && i>351) R_Cumulative[i-257]+=1737;
			if(which_region==16 && i>399) R_Cumulative[i-257]+=369;
			if(which_region==19 && i>307) R_Cumulative[i-257]+=42;
			if(which_region==3 && i>326) D_Cumulative[i-257]+=17;
			if(which_region==16 && i>399) D_Cumulative[i-257]+=22;
			if(which_region==16 && i==400) New_cases[i-257]=1236;
		}
	}
	file_input.close();
	R_daily[0]=R_Cumulative[0]-lastpreviousR;
	D_daily[0]=D_Cumulative[0]-lastpreviousD;
	T_daily[0]=T_Cumulative[0]-lastpreviousT;
	for(int i=170; i>0; i--){
		R_daily[i]=R_Cumulative[i]-R_Cumulative[i-1];
		D_daily[i]=D_Cumulative[i]-D_Cumulative[i-1];
		T_daily[i]=T_Cumulative[i]-T_Cumulative[i-1];
	}

	file_input.open("cleaned_colors_daily.csv",ios::in);
	if(file_input.fail()){
		cout<<"Couldn't open the cleaned colors file."<<endl;
		return -3;
	}
	for(int j=0; j<21; j++){
		if(j==which_region) file_output.open("fixed_"+Region[j]+".csv",ios::out);
	}
	/*
	file_output<<"Date,Cases,New cases,New recovered,New deaths,"<<
		     "New tests,Percentage of positive tests,Restricion color"<<endl;
	*/
	for(int i=0; i<171; i++){
		file_input>>Date[i];
		Tpercentage=100*(float)New_cases[i]/(float)T_daily[i];
		file_output<<Date[i]<<" "<<Current_cases[i]<<" "<<New_cases[i]<<" "<<
			     R_daily[i]<<" "<<D_daily[i]<<" "<<T_daily[i]<<" "<<Tpercentage<<" ";
		for(int j=0; j<21; j++){
			file_input>>holdstring;
			if(j==which_region){
				if(holdstring=="White") file_output<<"White"<<endl;
				else if(holdstring=="Yellow") file_output<<"Yellow"<<endl;
				else if(holdstring=="Orange") file_output<<"Orange"<<endl;
				else if(holdstring=="Red") file_output<<"Red"<<endl;
			}
		}
		file_input>>hold>>hold>>hold>>hold;
	}
	// This script technically doesn't write an header line and leaves a blank space as the field
	// separator, and the reason is to make the next script, link_regions also written in C++,
	// much easier to code and understand.
	file_input.close();
	file_output.close();
	return 0;
}

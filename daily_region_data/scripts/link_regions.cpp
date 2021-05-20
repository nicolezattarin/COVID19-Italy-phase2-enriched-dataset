#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Author: Dave Norman Parmegiani
// Date: May 2021
// This source code doesn't have any dependency, so to compile one can simply use:
// $ g++ link_regions.cpp -o link_region
// in the command line.

// This program (once compiled) needs ALL fixed region files in the directory, so one needs to
// execute the fix_all_regions script first (and possibly the get_all_regions script even before so
// if that hadn't been done).
 
// When executed, this program creates a single new dateset that includes all the date from all the
// fixed extracted region files. This resulting dateset will be the same file that is in the previous
// folder.
// Since there won't be any more scripts, the resulting file will properly be a .csv file with an header
// line and commas as field separators.

int main(){
	string date, color;
	int read;
	float Tpercentage;
	fstream file_input[21], file_output;
	string Region[21]={"Abruzzo","Basilicata","Calabria","Campania","Emilia-Romagna",
			   "Friuli_Venezia_Giulia","Lazio","Liguria","Lombardia","Marche","Molise",
			   "P.A.Bolzano","P.A.Trento","Piemonte","Puglia","Sardegna","Sicilia",
			   "Toscana","Umbria","Valle_Aosta","Veneto"};

	for(int j=0; j<21; j++){
		file_input[j].open("fixed_"+Region[j]+".csv",ios::in);
		if(file_input[j].fail()){
			cout<<"Couldn't open the fixed_"<<Region[j]<<".csv file."<<endl;
			return -1;
		}
	}
	file_output.open("regions-daily.csv",ios::out);
	file_output<<"Date,Region,Cases,New cases,New recovered,New deaths,"<<
		     "New tests,Percentage of positive tests,Restricion color"<<endl;

	for(int i=0; i<192; i++){
		for(int j=0; j<21; j++){
			file_input[j]>>date;
			file_output<<date<<",";
			// Also we can now finally spell properly every region name.
			if(j==5) file_output<<"Friuli Venezia Giulia,";
			else if(j==19) file_output<<"Valle d'Aosta,";
			else file_output<<Region[j]<<",";
			file_input[j]>>read;
			file_output<<read<<",";
			file_input[j]>>read;
			file_output<<read<<",";
			file_input[j]>>read;
			file_output<<read<<",";
			file_input[j]>>read;
			file_output<<read<<",";
			file_input[j]>>read;
			file_output<<read<<",";
			file_input[j]>>Tpercentage;
			file_output<<Tpercentage<<",";
			file_input[j]>>color;
			file_output<<color<<endl;
		}
	}
	// The idea is to remove all ausiliary files created up to this point, but obviously one may
	// decide to keep them somewhere, even work with them, or perhaps one may just decide to do
	// a completely different data analysis altogether.
	file_output.close();
	for(int i=0; i<21; i++) file_input[i].close();
	return 0;
}

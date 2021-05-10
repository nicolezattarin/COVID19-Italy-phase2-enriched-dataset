#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Dati tutti i file regione aggiustati, li uniamo in un unico dataset.

int main(){
	string data, colore;
	int lettura;
	float Tpercentage;
	fstream file_regione[21], file_out;
	string Regione[21]={"Abruzzo","Basilicata","Calabria","Campania","Emilia-Romagna",
			    "Friuli_Venezia_Giulia","Lazio","Liguria","Lombardia","Marche","Molise",
			    "P.A.Bolzano","P.A.Trento","Piemonte","Puglia","Sardegna","Sicilia",
			    "Toscana","Umbria","Valle_Aosta","Veneto"};

	for(int i=0; i<21; i++){
		file_regione[i].open(Regione[i]+"_aggiustata.csv",ios::in);
		if(file_regione[i].fail()){
			cout<<"Errore apertura file: "<<Regione[i]<<"_aggiustata.csv"<<endl;
			return -1;
		}
	}
	file_out.open("covid19-ita-regions-daily.csv",ios::out);
	file_out<<"$1 Date, $2 Region, $3 Cases, $4 New cases, $5 New recovered, $6 New deaths, ";
	file_out<<"$7 New tests, $8 Percentage of positive tests, $9 Restricion color"<<endl;

	for(int i=0; i<171; i++){
		for(int j=0; j<21; j++){
			file_regione[j]>>data;
			file_out<<data<<";"<<Regione[j]<<";";
			file_regione[j]>>lettura;
			file_out<<lettura<<";";
			file_regione[j]>>lettura;
			file_out<<lettura<<";";
			file_regione[j]>>lettura;
			file_out<<lettura<<";";
			file_regione[j]>>lettura;
			file_out<<lettura<<";";
			file_regione[j]>>lettura;
			file_out<<lettura<<";";
			file_regione[j]>>Tpercentage;
			file_out<<Tpercentage<<";";
			file_regione[j]>>colore;
			file_out<<colore<<endl;
		}
	}

	file_out.close();
	for(int i=0; i<21; i++) file_regione[i].close();
	return 0;
}

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Il programma va eseguito su ciascuna regione dopo averla estratta.

// Ci sono drop nel numero totale di tamponi in: Marche il 2021-01-24 di 12'043;
// Piemonte il 2020-12-16 di 215'581; Valle d'Aosta il 2020-12-02 di 6'386.

// Ci sono drop nell numero totale di guariti in:
// Campania il 2021-01-15 di 1; Liguria il 2021-04-05 di 89;
// Marche il 2020-12-13 di 344; Molise il 2020-12-25 di 1;
// P.A.Bolzano il 2020-12-24 di 1'282; P.A.Bolzano il 2021-02-02 di 94;
// P.A.Bolzano il 2021-02-09 di 1'265; Valle d'Aosta il 2020-12-27 di 3.

// Ci sono drop nel numero totale di morti in: Campania che non riporta i deceduti del 2021-01-15.

// La Sicilia per il 2021-03-29 non ha aggiornamento alcuno, quindi si considera come drop di tamponi,
// guariti, deceduti e anche nuovi casi di 0.

// Il dato giornaliero in questi casi è banalmente stimato come la media fra i due giorni
// adiacenti (che viene sommata nel totale insieme alla differenza del drop).

// Ci sono probabilmente anche salti "verso l'alto", ma non sono realisticamente distinguibili
// né trattabili. Si suggerisce quindi di usare occhio critico e di fare attenzione a possibili
// outliers.

// Il 2020-12-24 a P.A.Bolzano c'è una discrepanza fra casi totali rispetto al giorno prima e
// nuovi casi. Non ho saputo pensare ad una hot fix per questo errore, tanto è intriseco.

int main(int argc, char**argv){
	if(argc!=2){
		cout<<"Passare <regione>"<<endl;// Ricorda che nei file delle regioni la data è +1
		return -1;			// quindi la prenderemo dal file dei colori.
	}

	fstream file_regione, file_color, file_out;
	int quale_regione, appo, current, newc, Tappo, preTappo, Rappo, preRappo, Dappo, preDappo;
	string Data[171];
	int Current_cases[171], New_cases[171], T_Cumulative[171], Tdaily[171];
	int R_Cumulative[171], Rdaily[171], D_Cumulative[171], Ddaily[171];
	// Il numero di elementi è il numero di record nel file dei colori.
	string colore, appostring;
	float Tpercentage;

	string Regione[21]={"Abruzzo","Basilicata","Calabria","Campania","Emilia-Romagna",
			    "Friuli_Venezia_Giulia","Lazio","Liguria","Lombardia","Marche","Molise",
			    "P.A.Bolzano","P.A.Trento","Piemonte","Puglia","Sardegna","Sicilia",
			    "Toscana","Umbria","Valle_Aosta","Veneto"};
	appostring=argv[1];
	for(int i=0; i<21; i++){
		if(Regione[i]==appostring){
			quale_regione=i;
		}
	}

	file_regione.open(appostring+".csv",ios::in);
	if(file_regione.fail()){
		cout<<"Errore apertura file regione."<<endl;
		return -2;
	}
	for(int i=0; i<428; i++){// Si prende il numero di giorni dall' inizio al punto prestabilito.
		file_regione>>appo>>appo>>appo>>appo>>appo>>current>>
			appo>>newc>>Rappo>>Dappo>>
			appo>>appo>>appo>>Tappo>>
			appo>>appo>>appo>>appo>>appo>>appo;
		if(i==256){	// Serviranno a calcolare i dati nel primo giorno con colori.
			preRappo=Rappo;
			preDappo=Dappo;
			preTappo=Tappo;
		}
		if(i>256){	// i parte da 0 e non da 1, e nei file delle regioni la data è +1:
			Current_cases[i-257]=current;	// il primo record con colori è il 258esimo,
			New_cases[i-257]=newc;		// che equivale a i=257.
			R_Cumulative[i-257]=Rappo;
			D_Cumulative[i-257]=Dappo;
			T_Cumulative[i-257]=Tappo;
			// Qui iniziano i flag per i dati mancanti:
			if(quale_regione==9 && i>335) T_Cumulative[i-257]+=18636;
			if(quale_regione==13 && i>296) T_Cumulative[i-257]+=229074;
			if(quale_regione==16 && i>399) T_Cumulative[i-257]+=18951;
			if(quale_regione==19 && i>282) T_Cumulative[i-257]+=6762;
			if(quale_regione==3 && i>326) R_Cumulative[i-257]+=971;
			if(quale_regione==7 && i>406) R_Cumulative[i-257]+=259;
			if(quale_regione==9 && i>293) R_Cumulative[i-257]+=735;
			if(quale_regione==10 && i>305) R_Cumulative[i-257]+=2;
			if(quale_regione==11 && i>304) R_Cumulative[i-257]+=1396;
			if(quale_regione==11 && i>344) R_Cumulative[i-257]+=349;
			if(quale_regione==11 && i>351) R_Cumulative[i-257]+=1737;
			if(quale_regione==16 && i>399) R_Cumulative[i-257]+=369;
			if(quale_regione==19 && i>307) R_Cumulative[i-257]+=42;
			if(quale_regione==3 && i>326) D_Cumulative[i-257]+=17;
			if(quale_regione==16 && i>399) D_Cumulative[i-257]+=22;
			if(quale_regione==16 && i==400) New_cases[i-257]=1236;
		}
	}
	file_regione.close();
	Rdaily[0]=R_Cumulative[0]-preRappo;
	Ddaily[0]=D_Cumulative[0]-preDappo;
	Tdaily[0]=T_Cumulative[0]-preTappo;
	for(int i=170; i>0; i--){
		Rdaily[i]=R_Cumulative[i]-R_Cumulative[i-1];
		Ddaily[i]=D_Cumulative[i]-D_Cumulative[i-1];
		Tdaily[i]=T_Cumulative[i]-T_Cumulative[i-1];
	}

	file_color.open("colors_daily.csv",ios::in);
	if(file_color.fail()){
		cout<<"Errore apertura file colori."<<endl;
		return -3;
	}
	file_out.open(appostring+"_aggiustata.csv",ios::out);
	for(int i=0; i<171; i++){
		file_color>>Data[i];
		Tpercentage=100*(float)New_cases[i]/(float)Tdaily[i];
		file_out<<Data[i]<<" "<<Current_cases[i]<<" "<<New_cases[i]<<" ";
		// $1 Data, $2 Casi totali, $3 Nuovi casi, 
		file_out<<Rdaily[i]<<" "<<Ddaily[i]<<" "<<Tdaily[i]<<" "<<Tpercentage<<" ";
		// $4 Nuovi guariti, $5 Nuovi morti, $6 Nuovi tamponi, $7 % di tamponi positivi,
		for(int j=0; j<21; j++){			    // $8 Colore regione
			file_color>>appostring;
			if(j==quale_regione){
				if(appostring=="White") file_out<<"White"<<endl;
				else if(appostring=="Yellow") file_out<<"Yellow"<<endl;
				else if(appostring=="Orange") file_out<<"Orange"<<endl;
				else if(appostring=="Red") file_out<<"Red"<<endl;
			}
		}
		file_color>>appo>>appo>>appo>>appo;
	}
	file_color.close();
	file_out.close();
	return 0;
}

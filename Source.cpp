#include <iostream>
#include <string>
#include "Eveniment.h"
#include "Zona.h"
#include "Bilet.h"

using namespace std;

int main()
{
	cout << "THE TICKETING APP" << endl;
	cout << "CREATI UN EVENIMENT NOU" << endl << endl;

	Eveniment e;
	cin >> e;


	Zona* vectorzone = new Zona[e.getNrZone()];

	int nrTotalLocuriEveniment = 0;
	for (int i = 0; i < e.getNrZone(); i++)
	{
		nrTotalLocuriEveniment += vectorzone[i].getNrLocuriZona();
	}

	srand((unsigned)time(NULL));

	Bilet* vectorBilete = new Bilet[nrTotalLocuriEveniment];


	cout << "INTRODUCETI DATE DESPRE ZONE" << endl;
	string s = "";
	int n = 0;
	float f = 0;

	for (int i = 0; i < e.getNrZone(); i++)
	{
		cout << "Denumire zona: ";
		cin >> ws;
		getline(cin, s);
		vectorzone[i].setDenumireZona(s);

		cout << "Pret zona: ";
		cin >> f;
		vectorzone[i].setPretZona(f);

		cout << "Nr locuri: ";
		cin >> n;
		vectorzone[i].setNrLocuriZona(n);

		cout << "Nr locuri per rand: ";
		cin >> n;
		vectorzone[i].setNrLocuriPerRand(n);

	}

	cout << endl;
	cout << "HARTA ZONELOR" << endl;

	for (int i = 0; i < e.getNrZone(); i++)
	{

		cout << "Denumirea zonei: " << vectorzone[i].getDenumireZona() << endl;

		cout << "Locuri:" << endl;
		vectorzone[i].getLocuri();
		cout << endl << endl;
	}


	cout << "BILETELE GENERATE SUNT" << endl << endl;

	int k = 0;
	for (int i = 0; i < e.getNrZone(); i++)
	{
		srand((unsigned)time(NULL));
		for (int j = 0; j < vectorzone[i].getNrLocuriZona(); j++)
		{
			srand((unsigned)time(NULL));
			cout << "Id bilet: " << vectorBilete[k].getIdBilet() << endl;
			k++;
			cout << "Denumire eveniment: " << e.getDenumireEveniment() << endl;
			cout << "Data: " << e.getData() << endl;
			cout << "Ora: " << e.getOra() << ":" << e.getMinut() << endl;
			cout << "Adresa: " << e.getAdresa() << endl;
			cout << "Denumirea zonei: ";
			cout << vectorzone[i].getDenumireZona();
			cout << endl;
			cout << "Locul: " << j + 1 << " randul: ";
			vectorzone[i].getRand(j + 1);
			cout << endl;
			cout << "Pret: ";
			cout << vectorzone[i].getPretZona();
			cout << " lei" << endl;
			cout << vectorBilete->getMesajPtParticipanti() << endl;
			cout << endl << endl;
		}


	}

}
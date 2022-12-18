#include <iostream>
#include <string>
#include "Eveniment.h"
#include "Zona.h"
#include "Bilet.h"

using namespace std;

int main()
{	
	cout << "Eveniment" << endl;
	Eveniment e;
	cin >> e;

	Zona* vectorzone = new Zona[e.getNrZone()];

	string s="";
	int nr = 0;
	float pr = 0;
	for (int i = 0; i < e.getNrZone(); i++)
	{
		cout << "Denumire zona: ";
		cin >> ws;
		getline(cin, s);
		vectorzone[i].setDenumireZona(s);

		cout << "Pret zona: ";
		cin >> pr;
		vectorzone[i].setPretZona(pr);

		cout << "Nr locuri: ";
		cin >> nr;
		vectorzone[i].setNrLocuriZona(nr);

		cout << "Nr locuri per rand: ";
		cin >> nr;
		vectorzone[i].setNrLocuriPerRand(nr);

	}
	cout << endl;

	for (int i = 0; i < e.getNrZone(); i++)
	{
		cout << "Denumirea zonei: ";
		cout << vectorzone[i].getDenumireZona() << endl;

		cout << "Pretul zonei: ";
		cout << vectorzone[i].getPretZona() << endl;

		cout << "Numarul de locuri al zonei: ";
		cout << vectorzone[i].getNrLocuriZona() << endl;

		cout << "Numarul de locuri maxim pe rand: ";
		cout << vectorzone[i].getNrLocuriPerRand() << endl;

		cout << "Locuri:" << endl;
		vectorzone[i].getLocuri();
		cout << endl;
		cout << endl;
	}

	cout << "In zona 1, locul 6 se afla pe randul: ";
	vectorzone[0].getRand(6);
	cout << endl;

	int nrTotalLocuriEveniment = 0;
	for (int i = 0; i < e.getNrZone(); i++)
	{
		nrTotalLocuriEveniment += vectorzone[i].getNrLocuriZona();
	}
	
	srand((unsigned) time(0));

	Bilet* vectorBilete = new Bilet[nrTotalLocuriEveniment];
	string mesaj = vectorBilete->getMesajPtParticipanti();
	for (int i = 0; i < nrTotalLocuriEveniment; i++)
	{
		cout << vectorBilete[i].getIdBilet() << endl;
		cout << mesaj << endl << endl;
	}
}


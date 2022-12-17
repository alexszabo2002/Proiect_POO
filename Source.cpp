#include <iostream>
#include <string>
#include "Eveniment.h"
#include "Zona.h"

using namespace std;

int main()
{	

	cout << "Eveniment" << endl;
	Eveniment e;
	cin >> e;

	Zona* vectorzone = new Zona[e.getNrZone()];

	string s="";
	int nr = 0;
	for (int i = 0; i < e.getNrZone(); i++)
	{
		cout << "Denumire zona: ";
		cin >> ws;
		getline(cin, s);
		vectorzone[i].setDenumireZona(s);

		cout << "Nr locuri: ";
		cin >> nr;
		vectorzone[i].setNrLocuriZona(nr);

	}

	for (int i = 0; i < e.getNrZone(); i++)
	{
		cout << vectorzone[i].getDenumireZona() << endl;
		cout << vectorzone[i].getNrLocuriZona() << endl;
		vectorzone[i].getLocuri();
		cout << endl;
	}

}
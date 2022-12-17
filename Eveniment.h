#pragma once
#include <iostream>
#include <string>
#include "Zona.h"

using namespace std;

class Zona;

class Eveniment
{
private:
	string denumireEveniment;
	string data;
	int ora;
	int minut;
	string adresa;
	int nrZone;
	Zona* zone;

public:
	Eveniment();
	Eveniment(string, string, int, int, string, int);
	Eveniment(const Eveniment&);
	~Eveniment();
	Eveniment& operator=(const Eveniment&);

	void setDenumireEveniment(string);
	string getDenumireEveniment();

	void setData(string);
	string getData();

	void setOra(int);
	int getOra();

	void setMinut(int);
	int getMinut();

	void setAdresa(string);
	string getAdresa();

	void setNrZone(int);
	int getNrZone();

	friend ostream& operator<<(ostream&, Eveniment);
	friend istream& operator>>(istream&, Eveniment&);

	friend class Zona;
};
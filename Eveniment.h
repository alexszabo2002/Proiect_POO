#pragma once
#include <iostream>
#include <string>

using namespace std;

class Eveniment
{
private:
	string denumireEveniment;
	string data;
	int ora;
	int minut;
	string adresa;
	int nrZone;

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
};
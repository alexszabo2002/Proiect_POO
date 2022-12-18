#pragma once
#include <iostream>
#include <string>

using namespace std;

class Zona
{
private:
	string denumireZona;
	float pretZona;
	int nrLocuriZona;
	int nrLocuriPerRand;
	int* locuri;

public:
	Zona();
	Zona(string,float, int, int);
	Zona(const Zona&);
	~Zona();
	Zona& operator=(const Zona&);

	void setDenumireZona(string);
	string getDenumireZona();

	void setPretZona(float);
	float getPretZona();

	void setNrLocuriZona(int);
	int getNrLocuriZona();

	void setNrLocuriPerRand(int);
	int getNrLocuriPerRand();

	void getLocuri();
	void getRand(int);

	friend ostream& operator<<(ostream&, Zona);
	friend istream& operator>>(istream&, Zona&);
};
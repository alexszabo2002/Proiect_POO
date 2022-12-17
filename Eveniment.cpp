#include <iostream>
#include <string>
#include "Eveniment.h"
#include "Zona.h"

using namespace std;

Eveniment::Eveniment() 
{
	denumireEveniment = "N/A";
	data = "N/A";
	ora = 0;
	minut = 0;
	adresa = "N/A";
	nrZone = 0;
}

Eveniment::Eveniment(string _denumireEveniment, string _data, int _ora, int _minut, string _adresa, int _nrZone)
{
	denumireEveniment = _denumireEveniment;
	data = _data;
	ora = _ora;
	minut = _minut;
	adresa = _adresa;
	nrZone = _nrZone;

}

Eveniment::Eveniment(const Eveniment& e) 
{
	this->denumireEveniment = e.denumireEveniment;
	this->data = e.data;
	this->ora = e.ora;
	this->minut = e.minut;
	this->adresa = e.adresa;
	this->nrZone = e.nrZone;
}

Eveniment::~Eveniment()
{

}

Eveniment& Eveniment::operator=(const Eveniment& e)
{
	if (this != &e)
	{
		this->denumireEveniment = e.denumireEveniment;
		this->data = e.data;
		this->ora = e.ora;
		this->minut = e.minut;
		this->adresa = e.adresa;
		this->nrZone = e.nrZone;
	}
	return *this;
}

void Eveniment::setDenumireEveniment(string _denumireEveniment)
{
	this->denumireEveniment = _denumireEveniment;
}

string Eveniment::getDenumireEveniment()
{
	return denumireEveniment;
}

void Eveniment::setData(string _data)
{
	this->data = _data;
}

string Eveniment::getData()
{
	return data;
}

void Eveniment::setOra(int _ora)
{
	this->ora = _ora;
}

int Eveniment::getOra()
{
	return ora;
}

void Eveniment::setMinut(int _minut)
{
	this->minut = _minut;
}

int Eveniment::getMinut()
{
	return minut;
}

void Eveniment::setAdresa(string _adresa)
{
	this->adresa = _adresa;
}

string Eveniment::getAdresa()
{
	return adresa;
}

void Eveniment::setNrZone(int _nrZone)
{
	this->nrZone = _nrZone;
}

int Eveniment::getNrZone()
{
	return nrZone;
}

ostream& operator<<(ostream& out, Eveniment e)
{
	out << "Denumire eveniment: " << e.denumireEveniment << endl;
	out << "Data eveniment: " << e.data << endl;
	out << "Ora: " << e.ora << endl;
	out << "Minutul: " << e.minut << endl;
	out << "Adresa: " << e.adresa << endl;
	out << "Nr zone: " << e.nrZone << endl << endl;

	return out;
}

istream& operator>>(istream& in, Eveniment& e)
{
	cout << "Denumire eveniment: ";
	in >> ws;
	getline(in, e.denumireEveniment);
	cout << "Data eveniment: ";
	in >> ws;
	getline(in, e.data);
	cout << "Ora: ";
	in >> e.ora;
	cout << "Minutul: ";
	in >> e.minut;
	cout << "Adresa: ";
	in >> ws;
	getline(in, e.adresa);
	cout << "Nr zone: ";
	in >> e.nrZone;

	return in;
}


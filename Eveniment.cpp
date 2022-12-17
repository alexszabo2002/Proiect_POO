#include <iostream>
#include <string>
#include "Eveniment.h"
//#include "Zona.h"

using namespace std;

Eveniment::Eveniment() 
{
	denumireEveniment = nullptr;
	data = "N/A";
	ora = 0;
	minut = 0;
	adresa = "N/A";
	nrZone = 0;
}

Eveniment::Eveniment(const char* _denumireEveniment, string _data, int _ora, int _minut, string _adresa, int _nrZone)
{
	if (denumireEveniment != nullptr)
	{
		denumireEveniment = new char[strlen(_denumireEveniment) + 1];
		strcpy_s(denumireEveniment, strlen(_denumireEveniment) + 1, _denumireEveniment);
	}
	else
	{
		denumireEveniment = nullptr;
	}

	data = _data;
	ora = _ora;
	minut = _minut;
	adresa = _adresa;
	nrZone = _nrZone;

}

Eveniment::Eveniment(const Eveniment& e) 
{
	if (e.denumireEveniment != nullptr)
	{
		this->denumireEveniment = new char[strlen(e.denumireEveniment) + 1];
		strcpy_s(this->denumireEveniment, strlen(e.denumireEveniment) + 1, e.denumireEveniment);
	}
	else
	{
		this->denumireEveniment = nullptr;
	}

	this->data = e.data;
	this->ora = e.ora;
	this->minut = e.minut;
	this->adresa = e.adresa;
	this->nrZone = e.nrZone;
}

Eveniment::~Eveniment()
{
	if (denumireEveniment != nullptr)
	{
		delete[] denumireEveniment;
	}
}

Eveniment& Eveniment::operator=(const Eveniment& e)
{
	if (this != &e)
	{
		if (e.denumireEveniment != nullptr)
		{
			if (this->denumireEveniment != nullptr)
			{
				delete[] this->denumireEveniment;
			}

			this->denumireEveniment = new char[strlen(e.denumireEveniment) + 1];
			strcpy_s(this->denumireEveniment, strlen(e.denumireEveniment) + 1, e.denumireEveniment);
		}

		this->data = e.data;
		this->ora = e.ora;
		this->minut = e.minut;
		this->adresa = e.adresa;
		this->nrZone = e.nrZone;
	}
	return *this;
}

void Eveniment::setDenumireEveniment(const char* _denumireEveniment)
{
	if (_denumireEveniment != nullptr)
	{
		if (this->denumireEveniment != nullptr)
		{
			delete[] this->denumireEveniment;
		}

		this->denumireEveniment = new char[strlen(_denumireEveniment) + 1];
		strcpy_s(this->denumireEveniment, strlen(_denumireEveniment) + 1, _denumireEveniment);
	}
}

char* Eveniment::getDenumireEveniment()
{
	if (denumireEveniment != nullptr)
	{
		char* copie = new char[strlen(denumireEveniment) + 1];
		strcpy_s(copie, strlen(denumireEveniment) + 1, denumireEveniment);
		return copie;
	}

	return nullptr;
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
	out << "Denumire eveniment: ";
	if (e.denumireEveniment != nullptr)
	{
		out << e.denumireEveniment;
	}
	out << endl;
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
	string buffer;
	in >> ws;
	getline(in, buffer);
	e.setDenumireEveniment(buffer.c_str());
	
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


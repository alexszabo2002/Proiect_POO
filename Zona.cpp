#include <iostream>
#include <string>
#include "Zona.h"

using namespace std;

Zona::Zona()
{
	denumireZona = "N/A";
	nrLocuriZona = 0;
	locuri = nullptr;
}

Zona::Zona(string _denumireZona, int _nrLocuriZona)
{
	denumireZona = _denumireZona;
	nrLocuriZona = _nrLocuriZona;

	if (nrLocuriZona > 0)
	{
		locuri = new int[_nrLocuriZona];

		for (int i = 0; i < _nrLocuriZona; i++)
		{
			locuri[i] = i + 1;
		}
	}
	else
	{
		nrLocuriZona = 0;
		locuri = nullptr;
	}
}

Zona::Zona(const Zona& z)
{
	this->denumireZona = z.denumireZona;

	if (z.locuri != nullptr && z.nrLocuriZona > 0)
	{
		this->nrLocuriZona = z.nrLocuriZona;

		this->locuri = new int[z.nrLocuriZona];
		for (int i = 0; i < z.nrLocuriZona; i++)
		{
			this->locuri[i] = z.locuri[i];
		}
	}
	else
	{
		this->nrLocuriZona = 0;
		this->locuri = nullptr;
	}
}

Zona::~Zona()
{
	if (locuri != nullptr && nrLocuriZona > 0)
	{
		delete[] locuri;
		locuri = nullptr;
	}
}

Zona& Zona::operator=(const Zona& z)
{
	if (this != &z)
	{
		this->denumireZona = z.denumireZona;

		if (this->locuri != nullptr && this->nrLocuriZona > 0)
		{
			delete[] this->locuri;

			this->nrLocuriZona = z.nrLocuriZona;

			this->locuri = new int[z.nrLocuriZona];
			for (int i = 0; i < z.nrLocuriZona; i++)
			{
				this->locuri[i] = z.locuri[i];
			}
		}
		else
		{
			this->nrLocuriZona = 0;
			this->locuri = nullptr;
		}
	}
	return *this;
}

void Zona::setDenumireZona(string _denumireZona)
{
	this->denumireZona = _denumireZona;
}

string Zona::getDenumireZona()
{
	return denumireZona;
}

void Zona::setNrLocuriZona(int _nrLocuriZona)
{
	if (this->locuri != nullptr && this->nrLocuriZona > 0)
	{
		delete[] this->locuri;
		this->locuri = nullptr;
	}

	if (_nrLocuriZona == 0)
	{
		this->nrLocuriZona = 0;
		this->locuri = nullptr;
	}
	else
	{
		this->nrLocuriZona = _nrLocuriZona;
		this->locuri = new int[_nrLocuriZona];
		for (int i = 0; i < _nrLocuriZona; i++)
		{
			this->locuri[i] = i + 1;
		}
	}
}

int Zona::getNrLocuriZona()
{
	return nrLocuriZona;
}

void Zona::getLocuri()
{
	if (this->nrLocuriZona == 0)
	{
		cout << "Nu exista locuri" << endl;
	}
	else
	{
		for (int i = 0; i < this->nrLocuriZona; i++)
		{
			cout << this->locuri[i] << " ";
		}
	}
}

ostream& operator<<(ostream& out, Zona z)
{
	out << "Denumire zona: " << z.denumireZona << endl;
	out << "Nr locuri zona: " << z.nrLocuriZona << endl;
	out << endl;

	for (int i = 0; i < z.nrLocuriZona; i++)
	{
		if (z.locuri[i] % 10 == 9)
		{
			out << z.locuri[i] << endl;
		}
		else
		{
			out << z.locuri[i] << " ";
		}
	}
	out << endl;
	return out;
}

istream& operator>>(istream& in, Zona& z)
{
	cout << "Denumire zona: ";
	in >> ws;
	getline(in, z.denumireZona);
	cout << "Nr locuri zona: ";
	in >> z.nrLocuriZona;

	if (z.nrLocuriZona > 0)
	{
		z.locuri = new int[z.nrLocuriZona];

		for (int i = 0; i < z.nrLocuriZona; i++)
		{
			z.locuri[i] = i + 1;
		}
	}

	return in;
}
#include <iostream>
#include <string>
#include "Bilet.h"

using namespace std;

string Bilet::mesajPtParticipanti = "Va uram vizionare placuta!";

Bilet::Bilet() : idBilet(rand() + 2*rand() + 3*rand())
{

}

Bilet::Bilet(int _idBilet) : idBilet(_idBilet)
{
	_idBilet = rand() * 9999 + rand();
}

int Bilet::getIdBilet()
{
	return idBilet;
}

string Bilet::getMesajPtParticipanti()
{
	return mesajPtParticipanti;
}



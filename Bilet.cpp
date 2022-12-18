#include <iostream>
#include <string>
#include "Bilet.h"

using namespace std;

string Bilet::mesajPtParticipanti = "Va uram vizionare placuta!";

Bilet::Bilet() : idBilet(rand() * 666 + rand())
{

}

Bilet::Bilet(int _idBilet) : idBilet(_idBilet)
{
	_idBilet = rand() * 666 + rand();
}

int Bilet::getIdBilet()
{
	return idBilet;
}

string Bilet::getMesajPtParticipanti()
{
	return mesajPtParticipanti;
}


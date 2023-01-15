#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <random>

using namespace std;

class Bilet
{
private:
	const int idBilet;
	static string mesajPtParticipanti;

public:

	Bilet();
	Bilet(int);

	int getIdBilet();

	static string getMesajPtParticipanti();

};


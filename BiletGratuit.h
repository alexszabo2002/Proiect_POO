#pragma once
#include <iostream>
#include <string>
#include "Bilet.h"

using namespace std;

class BiletGratuit : public Bilet
{
private:
	static string mesajDiscount;

public:
	BiletGratuit();
	BiletGratuit(int);

	static string getMesajDiscount();
};
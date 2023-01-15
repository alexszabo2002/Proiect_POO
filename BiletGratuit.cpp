#include <iostream>
#include <string>
#include "BiletGratuit.h"
#include "Bilet.h"

using namespace std;

string BiletGratuit::mesajDiscount = "Aceasta este o invitatie. Se aplica 100% reducere.";

BiletGratuit::BiletGratuit() : Bilet() {}

string BiletGratuit::getMesajDiscount()
{
	return mesajDiscount;
}
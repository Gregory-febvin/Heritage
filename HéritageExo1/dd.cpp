#include "dd.h"
#include <stdlib.h>

dd::dd() {
	ScoreTotal = 0;
	NbLancer = 0;
	(*this)++;
}

dd::dd(int n) {
	ValeurDe = n;
}

void dd::operator++(int)
{
	ValeurDe = rand() % 6 + 1;
	ScoreTotal += ValeurDe;

	NbLancer = NbLancer++;
}

void dd::operator=(int& value)
{
	this->ScoreTotal = value;
}

void operator+=(int &n, dd & dd)
{
	n = dd.ValeurDe;	
}

void operator<(int & n, dd & dd)
{
	n = dd.ScoreTotal;
}



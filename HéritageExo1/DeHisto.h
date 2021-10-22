#pragma once
#include "dd.h"
class DeHisto :
	public dd
{
private:
	int tab[7];

public:
	DeHisto();
	void jet(); //simule le jet d’un dé
	void jet(int n); //simule le jet de n dé
};


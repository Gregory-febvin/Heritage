#pragma once
#include "dd.h"
class DeHisto :
	public dd
{
private:
	int tab[7];

public:
	DeHisto();
	void jet(); 
	void jet(int n); 
	int getValeurTableau(int i);
};



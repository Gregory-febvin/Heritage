#include "DeHisto.h"

DeHisto::DeHisto() 
{
	&dd::operator=(0);
}

void DeHisto::jet()
{
	int n;
	dd::operator++(n);

	n += (*this);
	tab[0] = n;
}

void DeHisto::jet(int n)
{
	for (int i = 0; i < n; i++)
	{
		dd::operator++(n);
		int x;

		x += (*this);
		tab[i] = x ;
	}
}

int DeHisto::getValeurTableau(int i)
{
	return tab[i];
}
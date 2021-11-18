#include "DeHisto.h"
#include <qDebug>

DeHisto::DeHisto() 
{
	&dd::operator=(0);
}

void DeHisto::jet()
{
	int n;
	dd::operator++(n);

	tab[0] = n;
	qDebug() << tab[0];
}

void DeHisto::jet(int n)
{
	for (int i = 0; i < n; i++)
	{
		dd::operator++(n);
		int nombre;

		nombre += (*this);
		tab[i] = nombre ;
		qDebug() << tab[i];
	}
}

int DeHisto::getValeurTableau(int i)
{
	return tab[i];
}
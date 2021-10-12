#include "Fonction.h"


void Fonction::AfficheScore()
{
	// this->dd += ;
	// ui.label->setText("Total : " + QLocale().toString(this->dd));
}

void Fonction::RemiseScoreZero()
{
	dd = NULL;
	ui.label->setText(QLocale().toString(dd));
}

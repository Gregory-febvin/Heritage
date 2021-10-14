#include "HritageExo1.h"
#include <stdio.h>
#include <stdlib.h>

HritageExo1::HritageExo1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void HritageExo1::LanceDe()
{
	dd = rand() % 6 + 1;
	this->n += dd;
	ui.label_2->setText("Nombre : " + QLocale().toString(dd));
}

void HritageExo1::AfficheScore()
{
	ui.label->setText("Total : " + QLocale().toString(this->n));
}

void HritageExo1::RemiseScoreZero()
{
	n = 0;
	ui.label->setText("Total : " + QLocale().toString(n));
}

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
	n = rand() % 6 + 1;
	this->dd += n;
	ui.label_2->setText("Nombre : " + QLocale().toString(n));
}

void HritageExo1::AfficheScore()
{
	ui.label->setText("Total : " + QLocale().toString(this->dd));
}

void HritageExo1::RemiseScoreZero()
{
	dd = NULL;
	ui.label->setText("Total : " + QLocale().toString(dd));
}

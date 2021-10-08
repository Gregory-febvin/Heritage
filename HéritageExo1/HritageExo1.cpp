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

	ui.label_2->setText("Nombre : " + QLocale().toString(n));

	//HritageExo1::AjoutScore(n);
}

void HritageExo1::RemiseScoreZero()
{
	//this->dd = ;
	//ui.pushButton_2->set(this->dd, 0);
}

void HritageExo1::AfficheScore()
{
	//ui.label->setText("Total : " + QLocale().toString(dd));
}

void HritageExo1::AjoutScore(int dd)
{
	//this->dd += dd;
	//HritageExo1::AfficheScore();
}

void HritageExo1::getN()
{

}

void HritageExo1::getDD()
{

}

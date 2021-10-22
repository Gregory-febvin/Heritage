#include <stdio.h>
#include <stdlib.h>
#include "dd.h"
#include "HritageExo1.h"
#include <qDebug>

HritageExo1::HritageExo1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	dd de;

}


void HritageExo1::LanceDe()
{
	
	(*de)++;
	
	HritageExo1::AfficheValeurDe();

	this->n += (*de);
	qDebug() << this->n;

	this->n < (*de);
}

void HritageExo1::AfficheValeurDe()
{
	this->n += (*de);

	QString Score = QString::number(this->n);
	ui.label_2->setText(Score);
	
}

void HritageExo1::RemiseScoreZero()
{
	
	(*de)=(0);

	//ui.label->setText("0");
}

void HritageExo1::AfficheScore()
{
	
	this->n < (*de);

	QString ScoreTotal = QString::number(this->n);
	ui.label->setText(ScoreTotal);
	
}

#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HritageExo1.h"
#include "dd.h"
#include "DeHisto.h"

class HritageExo1 : public QMainWindow
{
    Q_OBJECT

public:
    HritageExo1(QWidget *parent = Q_NULLPTR);
	
private:
	Ui::HritageExo1Class ui;
	
	dd *de;
	int n;
	DeHisto *deMultiple;

public slots:
	void LanceDe();
	void RemiseScoreZero();
	void AfficheScore();
	void AfficheValeurDe();

	void DeHisto();
	void DeNormal();

	void DeMultiple();
};
#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HritageExo1.h"
#include "dd.h"

class HritageExo1 : public QMainWindow
{
    Q_OBJECT

public:
    HritageExo1(QWidget *parent = Q_NULLPTR);
	
private:
	Ui::HritageExo1Class ui;
	
	dd *de;
	int n;

public slots:
	void LanceDe();
	void RemiseScoreZero();
	void AfficheScore();
	
	void AfficheValeurDe();
};
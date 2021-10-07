#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HritageExo1.h"

class HritageExo1 : public QMainWindow
{
    Q_OBJECT

public:
    HritageExo1(QWidget *parent = Q_NULLPTR);

private:

	int n;
	int dd;

    Ui::HritageExo1Class ui;

public slots:
	void LanceDe();
	void RemiseScoreZero();
	void AfficheScore();
};

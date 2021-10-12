#pragma once
#include "HritageExo1.h"
class Fonction : public HritageExo1
{
private:
	Ui::HritageExo1Class ui;
	HritageExo1 * n;

public slots:
	void RemiseScoreZero();
	void AfficheScore();
};


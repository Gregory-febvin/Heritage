#pragma once

class dd
{
private:

	int ValeurDe;
	int ScoreTotal;
	
	int NbLancer;

public:

	dd();
	dd(int n);

	void operator++(int);
	friend void operator+=(int &n, dd &dd);
	friend void operator<(int &n, dd &dd);
	void operator=(int& value);
};
#pragma once
#ifndef	ZAMESTNANEC_H_
#define ZAMESTNANEC_H_
#include "osoba.h"
#include <string>
#include <ostream>

using namespace std;
const string defaultFunkce = "agent 007";

class Zamestnanec : public Osoba {
public:
	Zamestnanec();
	Zamestnanec(const string, const string, const string, const string, const string);
	string getFunkce()const;
	//friend ostream& operator<<(ostream&, const Zamestnanec&);
	virtual ostream& vypis(ostream&)const override;

private:
	string funkce;

};

#endif // !ZAMESTNANEC_H_

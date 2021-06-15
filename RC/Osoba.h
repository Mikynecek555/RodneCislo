#pragma once
#ifndef OSOBA_H_
#define OSOBA_H_
#include "rc.h"
#include <string>
#include <ostream>

using namespace std;

const string defaultJmeno = "James";
const string defaultPrijmeni = "Bond";
const string defaultEmail = "bond@sspu-opava.cz";

class Osoba : public RodneCislo {
public:
	Osoba();
	Osoba(const string, const string, const string, const string);
	string getNazev()const;
	string getEmail()const;
	//friend ostream& operator<<(ostream&, const Osoba&);
	virtual ostream& vypis(ostream&)const override;
	string nazev;
	string email;

private:

};

#endif // !OSOBA_H_

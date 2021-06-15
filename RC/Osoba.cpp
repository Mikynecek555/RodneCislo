#include "Osoba.h"
#include <ctime>
#pragma warning(disable : 4996)

using namespace std;


Osoba::Osoba()
{
	this->rc = defaultRc;
	this->nazev = defaultJmeno + " " + defaultPrijmeni;
	this->email = defaultEmail;
}

Osoba::Osoba(const string rc, const string jmeno, const string prijmeni, const string email) 
{
	if (!setRc(rc)) 
	{
		this->rc = defaultRc;
		this->nazev = defaultJmeno + " " + defaultPrijmeni;
		this->email = defaultEmail;
	}

	else 
	{
		this->nazev = jmeno + " " + prijmeni;
		this->email = email;
	}
}

string Osoba::getNazev() const 
{
	return this->nazev;
}

string Osoba::getEmail() const 
{
	return this->email;
}

ostream& Osoba::vypis(ostream& os) const
{
	os << "Jmeno a prijmeni : " << this->getNazev() << endl;
	os << "RC               : " << RodneCislo::getRc() << endl;
	os << "Narozen          : " << RodneCislo::datumNarozeni() << endl;
	os << "Vek              : " << RodneCislo::vek() << endl;
	os << "Pohlavi          : " << RodneCislo::pohlavi() << endl;
	os << "Email            : " << this->getEmail() << endl << endl;
	os << "V I Z I T K A" << endl;
	os << "****************" << endl;
	os << this->getNazev() << endl;
	os << this->getEmail() << endl;
	os << "****************" << endl;
	return os;
}


/*ostream& operator<<(ostream& os, const Osoba& osoba) 
{
	os << "Jmeno a prijmeni : " << osoba.getNazev() << endl;
	os << "RC               : " << osoba.getRc() << endl;
	os << "Narozen          : " << osoba.datumNarozeni() << endl;
	os << "Vek              : " << osoba.vek() << endl;
	os << "Pohlavi          : " << osoba.pohlavi() << endl;
	os << "Email            : " << osoba.getEmail() << endl << endl;
	os << "V I Z I T K A" << endl;
	os << "****************" << endl;
	os << osoba.getNazev() << endl;
	os << osoba.getEmail() << endl;
	os	<< "****************" << endl;
	return os;
}
*/
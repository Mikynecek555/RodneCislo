#include "zamestnanec.h"


Zamestnanec::Zamestnanec() 
{
	this->rc = defaultRc;
	this->nazev = defaultJmeno + " " + defaultPrijmeni;
	this->email = defaultEmail;
	this->funkce = defaultFunkce;
}

Zamestnanec::Zamestnanec(const string rc, const string jmeno, const string prijmeni, const string email, const string funkce) 
{
	if (!setRc(rc)) {
		this->rc = defaultRc;
		this->nazev = defaultJmeno + " " + defaultPrijmeni;
		this->email = defaultEmail;
		this->funkce = defaultFunkce;
	}

	else 
	{
		this->nazev = jmeno + " " + prijmeni;
		this->email = email;
		this->funkce = funkce;
	}
}

string Zamestnanec::getFunkce() const 
{
	return this->funkce;
}

ostream& Zamestnanec::vypis(ostream& os) const
{
	os << "Jmeno a prijmeni : " << Osoba::getNazev() << endl;
	os << "RC               : " << RodneCislo::getRc() << endl;
	os << "Narozen          : " << RodneCislo::datumNarozeni() << endl;
	os << "Vek              : " << RodneCislo::vek() << endl;
	os << "Pohlavi          : " << RodneCislo::pohlavi() << endl;
	os << "Email            : " << Osoba::getEmail() << endl ;
	os << "Funkce           : " << this->getFunkce() << endl ;
	os << "V I Z I T K A" << endl;
	os << "****************" << endl;
	os << Osoba::getNazev() << endl;
	os << this->getFunkce() << endl;
	os << Osoba::getEmail() << endl;
	os << "****************" << endl;
	return os;
}


/*
ostream& operator<<(ostream& os, const Zamestnanec& zamestnanec) 
{
	os << "K A R T A  Z A M E S T N A N C E" << endl;
	os << "*********************" << endl;
	os << "Jmeno a prijmeni : " << zamestnanec.getNazev() << endl;
	os << "RC               : " << zamestnanec.getRc() << endl;
	os << "Narozen          : " << zamestnanec.datumNarozeni() << endl;
	os << "Vek              : " << zamestnanec.vek() << endl;
	os << "Pohlavi          : " << zamestnanec.pohlavi() << endl;
	os << "Email            : " << zamestnanec.getEmail() << endl;
	os << "Funkce           : " << zamestnanec.getFunkce() << endl << endl;
	os << "V I Z I T K A" << endl;
	os << "****************" << endl;
	os << zamestnanec.getNazev() << endl;
	os << zamestnanec.getFunkce() << endl;
	os << zamestnanec.getEmail() << endl;
	os << "****************" << endl;
	return os;
}*/
#include "student.h"


Student::Student() 
{
	this->rc = defaultRc;
	this->nazev = defaultJmeno + " " + defaultPrijmeni;
	this->email = defaultEmail;
	this->trida = defaultTrida;
}

Student::Student(const string rc, const string jmeno, const string prijmeni, const string email, const string trida) 
{
	if (!setRc(rc))
	{
		this->rc = defaultRc;
		this->nazev = defaultJmeno + " " + defaultPrijmeni;
		this->email = defaultEmail;
		this->trida = defaultTrida;
	}
	else
	{
		this->nazev = jmeno + " " + prijmeni;
		this->email = email;
		this->trida = trida;
	}
}

string Student::getTrida() const 
{
	return this->trida;
}

ostream& Student::vypis(ostream& os) const
{
	os << "Jmeno a prijmeni : " << Osoba::getNazev() << endl;
	os << "RC               : " << RodneCislo::getRc() << endl;
	os << "Narozen          : " << RodneCislo::datumNarozeni() << endl;
	os << "Vek              : " << RodneCislo::vek() << endl;
	os << "Pohlavi          : " << RodneCislo::pohlavi() << endl;
	os << "Email            : " << Osoba::getEmail() << endl << endl;
	os << "Trida            : " << this->getTrida() << endl;
	os << "P R U K A Z  S T U D E N T A" << endl;
	os << "****************" << endl;
	os << Osoba::getNazev() << ", " << this->getTrida() << endl;
	os << Osoba::getEmail() << endl;
	os << "****************" << endl;
	return os;
}



/*
ostream& operator<<(ostream& os, const Student& Student)
{
	os << "Jmeno a prijmeni : " << Student.getNazev() << endl;
	os << "RC               : " << Student.getRc() << endl;
	os << "Narozen          : " << Student.datumNarozeni() << endl;
	os << "Vek              : " << Student.vek() << endl;
	os << "Pohlavi          : " << Student.pohlavi() << endl;
	os << "Email            : " << Student.getEmail() << endl;
	os << "Trida            : " << Student.getTrida() << endl << endl;
	os << "P R U K A Z  S T U D E N T A" << endl;
	os << "****************" << endl;
	os << Student.getNazev() << ", " << Student.getTrida() << endl;
	os << Student.getEmail() << endl;
	os << "****************" << endl;
	return os;
}*/

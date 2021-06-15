#include "rc.h"
#include <ctime>
#pragma warning(disable : 4996)
using namespace std;


RodneCislo::RodneCislo() {
	this->rc = defaultRc;
}

RodneCislo::RodneCislo(const std::string rc) {
	if (!setRc(rc)) {
		this->rc = defaultRc;
	}
}

RodneCislo::RodneCislo(const RodneCislo& o) {
	this->rc = o.getRc();
}

RodneCislo::~RodneCislo() {
}

std::string RodneCislo::getRc() const {
	return this->rc;
}

bool RodneCislo::setRc(const std::string rc) {
	if (kontrolaRc(rc)) {
		this->rc = rc;
		return true;
	}

	else {
		return false;
	}
}

std::string RodneCislo::datumNarozeni() const 
{
	return std::to_string(ziskejDen()) + ". " + std::to_string(ziskejMesic()) + ". " + std::to_string(ziskejRok());
}

std::string RodneCislo::pohlavi() const {
	return (std::stoi(this->rc.substr(2, 2)) > 50 ? "zena" : "muz");
}

int RodneCislo::vek() const {

	time_t t = time(0);
	struct tm* now = localtime(&t);

	int rok = now->tm_year + 1900;
	int mesic = now->tm_mon + 1;
	int den = now->tm_mday;

	int vek = rok - ziskejRok();
	if (ziskejMesic() > mesic) {
		vek -= 1;
	}
	if (ziskejMesic() == mesic && ziskejDen() > den) {
		vek -= 1;
	}

	return vek;
}


bool RodneCislo::kontrolaRc(const std::string rc) const {
	if (rc.length() != 10) {
		return false;
	}

	for (int i = 0; i < rc.length(); i++) {
		if (rc[i] < '0' || rc[i] > '9') {
			return false;
		}
	}

	// získali jsme prvních 9 znaků, převedli na číslo a získali zbytek
	// po celočíselném dělení 11
	int zbytek = std::stoi(rc.substr(0, 9)) % 11;

	if (std::stoi(rc.substr(9, 1)) == zbytek) {
		return true;
	}

	else if (zbytek == 10 && rc.substr(9, 1) == "0") {
		return true;
	}

	else {
		return false;
	}
}

int RodneCislo::ziskejDen() const {
	return std::stoi(this->rc.substr(4, 2));
}

int RodneCislo::ziskejMesic() const {
	int mesic = std::stoi(this->rc.substr(2, 2));
	// u žen se k mesíci připočítává 50
	return mesic > 50 ? mesic - 50 : mesic;
}

int RodneCislo::ziskejRok() const {
	int rok = std::stoi(this->rc.substr(0, 2));
	return rok < 54 ? rok + 2000 : rok + 1900;
}

std::ostream& operator<<(std::ostream& os, const RodneCislo& rc) {
	return rc.vypis(os);
}

std::ostream& RodneCislo::vypis(std::ostream& os) const{
//	os << "-------------------------" << endl;
	os << "RC         : " << this->getRc() << endl;
	os << "Narozen    : " << this->datumNarozeni() << endl;
	os << "Vek        : " << this->vek() << endl;
	os << "Pohlavi    : " << this->pohlavi() << endl;
	return os;
}
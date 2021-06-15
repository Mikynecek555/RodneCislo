#pragma once
#ifndef RC_H_
#define RC_H_
#include <string>
#include <ostream>

const std::string defaultRc = "6803020070";

class RodneCislo {
public:
	RodneCislo();
	RodneCislo(const std::string);
	RodneCislo(const RodneCislo&);
	virtual ~RodneCislo();

	std::string getRc()const;
	bool setRc(const std::string);

	std::string datumNarozeni()const;
	std::string pohlavi()const;
	int vek()const;

	friend std::ostream& operator<<(std::ostream&, const RodneCislo&);
	virtual std::ostream& vypis(std::ostream&)const;

	std::string rc;
private:

	bool kontrolaRc(const std::string)const;
	int ziskejDen()const;
	int ziskejMesic()const;
	int ziskejRok()const;
};

#endif // !RC_H_

#pragma once
#ifndef	STUDENT_H_
#define STUDENT_H_
#include "osoba.h"
#include <string>
#include <ostream>

using namespace std;
const string defaultTrida = "IT1";

class Student : public Osoba {
public:
	Student();
	Student(const string, const string, const string, const string, const string);
	string getTrida()const;
	//friend ostream& operator<<(ostream&, const Student&);
	virtual ostream& vypis(ostream&)const override;

private:
	string trida;

};

#endif // !STUDENT_H_

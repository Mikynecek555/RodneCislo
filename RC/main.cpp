// RC.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#include "zamestnanec.h"
#include "student.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void vypis(const RodneCislo& rc, const std::string text) {
	cout << text << endl;
	for (int i = 0; i < text.length(); i++) {
		cout << "-";
	}
	cout << endl;
	cout << rc << endl;
	return;
}

int main()
{
	RodneCislo RC1;
	RodneCislo RC2("6462191472");
	RodneCislo RC3(RC2);
	Osoba o1;
	Osoba o2("6462191109", "Hana", "Rohanova", "rohanova@sspu-opava.cz");
	Zamestnanec z1;
	Zamestnanec z2("6001011236", "Josef", "Vonasek", "vonasek@sspu-opava.cz","ucitel odbornych predmetu");
	Student s1;
	Student s2("0355179990", "Marie", "Svobodova", "mariesvobodova@email.cz", "IT3");
	//cout << o1;
	vypis(RC1, "Objekt rc1 vytvoreny vychozim konstruktorem tridy rodneCislo");
	vypis(RC2, "Objekt rc2 vytvoreny konstruktorem s parametry tridy rodneCislo");
	vypis(RC3, "Objekt rc3 vytvoreny kopirovacim konstruktorem tridy rodneCislo");
	vypis(o1, "Objekt o1 vytvoreny vychozim konstruktorem tridy osoba");
	vypis(o2, "Objekt o2 vytvoreny konstruktorem s parametry tridy osoba");
	
	vypis(z1, "Objekt z1 vytvoreny vychozim konstruktorem tridy zamestnanec");
	vypis(z2, "Objekt z2 vytvoreny konstruktorem s parametry "
		"(rc,jmeno,prijmeni,email,funkce) tridy zamestnanec");
	vypis(s1, "Objekt s1 vytvoreny vychozim konstruktorem tridy student");
	vypis(s2, "Objekt s2 vytvoreny konstruktorem s parametry "
		"(rc,jmeno,prijmeni,email,trida) tridy student");
	return 0;
}
/*
#include "zamestnanec.h"
#include "student.h"
using std::cout;
using std::string;
using std::endl;
void vypis(const rodneCislo & rc, const std::string text) {
 cout << text << endl;
 for (int i = 0; i < text.length(); i++) {
 cout << "-";
 }
 cout << endl;
 cout << rc << endl;
 return;
}
int main(int argc, char** argv) {
 rodneCislo rc1;
 rodneCislo rc2("6462191472");
 rodneCislo rc3(rc2);
 osoba o1;
 osoba o2("6462191109","Hana","Rohanova","rohanova@sspu-opava.cz");
 zamestnanec z1;
 zamestnanec z2("6001011236","Josef","Vonasek","vonasek@sspu-opava.cz",
 "ucitel odbornych predmetu");
 student s1;
 student s2("0355179990","Marie","Svobodova","mariesvobodova@email.cz","IT3");
 vypis(rc1,"Objekt rc1 vytvoreny vychozim konstruktorem tridy rodneCislo");
 vypis(rc2,"Objekt rc2 vytvoreny konstruktorem s parametry tridy rodneCislo");
 vypis(rc3,"Objekt rc3 vytvoreny kopirovacim konstruktorem tridy rodneCislo");
 vypis(o1,"Objekt o1 vytvoreny vychozim konstruktorem tridy osoba");
 vypis(o2,"Objekt o2 vytvoreny konstruktorem s parametry tridy osoba");
 vypis(z1,"Objekt z1 vytvoreny vychozim konstruktorem tridy zamestnanec");
 vypis(z2,"Objekt z2 vytvoreny konstruktorem s parametry "
 "(rc,jmeno,prijmeni,email,funkce) tridy zamestnanec");
 vypis(s1,"Objekt s1 vytvoreny vychozim konstruktorem tridy student");
 vypis(s2,"Objekt s2 vytvoreny konstruktorem s parametry "
 "(rc,jmeno,prijmeni,email,trida) tridy student");
 return 0;
 */
// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.

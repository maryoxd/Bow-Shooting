#pragma once
#include <string>
#include <vector>
#include "Sip.h"
#include <iostream>

using namespace std;

class Hrac {
private:
	string Meno;
	int Poradie;
	vector<Sip> sipy;
	int Sucet;
public:
	Hrac(string meno, int poradie);
	void pridajSip(Sip sip);
	Sip dajSip(int index);
	void scitajSucet();
	void vymazSipy();
	void vypis();
	int getSucet();
	static bool porovnajHracov(Hrac& hrac1, Hrac& hrac2) {
		return hrac1.Sucet > hrac2.Sucet;
	}

};
#pragma once
#include <vector>
#include <random>
#include <algorithm>
#include <string>
#include <iostream>
#include "Hrac.h"
#include "Sip.h"

class Hra {
private:
	vector<Hrac> hraci;
	vector<Hrac> vyherci;
public:
	Hra();
	void naplnHracov();
	void rozdajSipy();
	void kvalifikacia();
	void top3();
	void vypisHracov();
	void vypisVyhercov();
};
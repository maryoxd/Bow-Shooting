#include "Hrac.h"

Hrac::Hrac(string meno, int poradie)
{
	this->Meno = meno;
	this->Poradie = poradie;
}

void Hrac::pridajSip(Sip sip)
{
	this->sipy.push_back(sip);
}

Sip Hrac::dajSip(int index)
{
	return this->sipy[index];
}

void Hrac::scitajSucet()
{
	for (int i = 0; i < this->sipy.size(); i++) {
		this->Sucet += this->sipy[i].getHodnota();
	}
}

void Hrac::vymazSipy()
{
	this->sipy.clear();
}

void Hrac::vypis()
{
	cout << this->Meno << this->Poradie << " ";
	for (int i = 0; i < this->sipy.size(); i++) {
		cout << this->sipy[i].getHodnota() << " ";
	}
	cout << ": " << this->Sucet;
	cout << endl;
}

int Hrac::getSucet()
{
	return this->Sucet;
}

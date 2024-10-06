#include "Hra.h"

Hra::Hra()
{
}

void Hra::naplnHracov()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distribution(5, 30);
	int nahodneC = distribution(gen);
	for (int i = 0; i < nahodneC; i++) {
		Hrac temp("P", i + 1);
		this->hraci.push_back(temp);
	}
}

void Hra::rozdajSipy()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distribution(0, 10);
	for (int i = 0; i < this->hraci.size(); i++) {
		for (int j = 0; j < 5; j++) {
			int nahodneC = distribution(gen);
			Sip temp(nahodneC);
			hraci[i].pridajSip(temp);
		}
		hraci[i].scitajSucet();
	}
}

void Hra::kvalifikacia()
{
	sort(this->hraci.begin(), this->hraci.end(), Hrac::porovnajHracov);
	this->vyherci.push_back(this->hraci[0]);
	this->vyherci.push_back(this->hraci[1]);
	this->vyherci.push_back(this->hraci[2]);

	this->hraci.erase(this->hraci.begin());
	this->hraci.erase(this->hraci.begin() + 1);
	this->hraci.erase(this->hraci.begin() + 2);
	
}

void Hra::top3()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distribution(0, 10);

	for (int i = 0; i < 3; i++) {
		this->vyherci[i].vymazSipy();
		for (int j = 0; j < 5; j++) {
			int nahodneC = distribution(gen);
			Sip temp(nahodneC);
			this->vyherci[i].pridajSip(temp);
		}
		this->vyherci[i].scitajSucet();

	}
	cout << endl;
	vypisVyhercov();
	cout << endl;
	sort(this->vyherci.begin(), this->vyherci.end(), Hrac::porovnajHracov);
	cout << endl << "VYPADAVA HRAC: " << endl;
	this->vyherci[2].vypis();
	cout << endl;
	this->vyherci.erase(this->vyherci.begin() + 2);
	this->vypisVyhercov();

	sort(this->vyherci.begin(), this->vyherci.end(), Hrac::porovnajHracov);
	cout << endl << "VYPADAVA HRAC: " << endl;
	this->vyherci[1].vypis();
	cout << endl;
	this->vyherci.erase(this->vyherci.begin() + 1);
	cout << "VYHERCA: " << endl;
	this->vypisVyhercov();


}

void Hra::vypisHracov()
{
	for (int i = 0; i < this->hraci.size(); i++) {
		this->hraci[i].vypis();
	}
}

void Hra::vypisVyhercov()
{
	for (int i = 0; i < this->vyherci.size(); i++) {
		this->vyherci[i].vypis();
	}
}

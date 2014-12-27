// kassa.cpp : Defines the entry point for the console application.
// 28-12-2014
// Laptop-Visual Studio C++ 2013
#include "stdafx.h"
#include <iostreaM>
#include <string>
#include <vector>

using namespace std;

class Product{
private:
	string naam;
	double prijs;
	int nummer;
	int voorraad;
public:
	Product(string naam, double prijs, int nummer)
	: naam(naam), prijs(prijs), nummer(nummer), voorraad(voorraad){
	}

	void setNaam(string n)
	{
		naam = n;
	}

	void setPrijs(double p)
	{
		prijs = p;
	}

	void setNummer(int n)
	{
		nummer = n;
	}

	void setVoorraad(int v)
	{
		voorraad = v;
	}

	void voorraadPlus()
	{
		voorraad++;
	}

	void voorraadMin()
	{
		voorraad--;
	}

	string getNaam()
	{
		return naam;
	}

	double getPrijs()
	{
		return prijs;
	}

	int getNummer()
	{
		return nummer;
	}

	int getVoorraad()
	{
		return voorraad;
	}
};

class Kassa{
private:
	double saldo;
	vector<Product> producten;
public:
	Kassa()
		:saldo(0){
	}

	double getSaldo()
	{
		return saldo;
	}

	void getProducten()
	{
		vector<Product>::iterator pos;

		for (pos == producten.begin(); pos != producten.end(); pos++){
			cout << "Naam: " << pos->getNaam << " - Prijs: " << pos->getPrijs
				<< " - Voorraad: " << pos->getVoorraad << " - Nummer: " << pos->getNummer << endl;
		}
	}

	void verkoopProduct(Product prod)
	{
		prod.voorraadMin;
		saldo += prod.getPrijs;
	}
};


int main()
{
	cin.get();
	return 0;
}


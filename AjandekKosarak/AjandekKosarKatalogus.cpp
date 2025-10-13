#include <stdexcept>
#include <fstream>
#include <iostream>

#include "AjandekKosarKatalogus.h"


void AjandekKosarKatalogus::UjAjandekKosar(const AjandekKosar& kosar)
{
	kosarak.push_back(kosar);
}

AjandekKosar AjandekKosarKatalogus::Keres(const std::string& nev)
{
	for (const auto& a : kosarak)
	{
		if (a.nev == nev)
		{
			return a;
		}
	}

	throw std::invalid_argument("Nem tartalmaz ilyen nevu kosarat a katalogus.");
}

void AjandekKosarKatalogus::Beolvas(const std::string& eleresi_ut)
{
	AjandekKosar kosar;
	std::ifstream inputFile(eleresi_ut);
	while (!inputFile.eof())
	{
		std::string s;
		std::getline(inputFile, s);
		if (s.find('(') != s.npos)
		{
			kosar = AjandekKosar{ s };
		}
		else 
		{
			kosar.UjAjandek()
		}
	}

	inputFile.close();
}
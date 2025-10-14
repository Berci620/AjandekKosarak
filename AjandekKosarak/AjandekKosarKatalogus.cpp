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
	int index = 0;
	std::ifstream inputFile(eleresi_ut);

	while (!inputFile.eof())
	{
		std::string s;
		std::getline(inputFile, s);

		if (s.find('(') == s.npos)	//Amikor egy új kosár nevét kapjuk
		{
			if (index != 0)
			{
				UjAjandekKosar(kosar);
			}
			kosar = AjandekKosar{ s };
		}
		else	//Amikor a kosár tartalmát kapjuk
		{
			std::string tipus = "";
			int mennyiseg = 0;
			auto it = s.cbegin();

			while (*it != '(')	//Tipus string felépítése a sorból
			{
				tipus += *it;
				++it;
			}
			++it;
			while (*it != ')')	//Mennyiség felépítése a sorból
			{
				mennyiseg *= 10;
				mennyiseg += static_cast<int>(*it)-48;
				++it;
			}

			kosar.UjAjandek(tipus, mennyiseg);
		}
		++index;
	}
	UjAjandekKosar(kosar);

	inputFile.close();
}

std::ostream& operator<<(std::ostream& os, const AjandekKosarKatalogus& katalogus)
{
	for (const auto it : katalogus.kosarak)
	{
		os << it;
	}
	return os;
}
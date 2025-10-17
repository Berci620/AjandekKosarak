#pragma once

#include "AjandekKosar.h"

class AjandekKosarKatalogus
{
public:	//Others
	void UjAjandekKosar(const AjandekKosar& kosar);	//Add
	AjandekKosar Keres(const std::string& nev);		//Find
	void Beolvas(const std::string& eleresi_ut);	//Fill from file
	std::vector<AjandekKosar> melyikTartalmaz(const std::string& ajandekTipus) const;	//Find, that contains

public:	//Operators
	friend std::ostream& operator<<(std::ostream& os, const AjandekKosarKatalogus& katalogus);

private:	//Variables
	std::vector<AjandekKosar> kosarak;
};


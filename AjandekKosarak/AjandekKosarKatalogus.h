#pragma once

#include "AjandekKosar.h"

class AjandekKosarKatalogus
{
public:
	void UjAjandekKosar(const AjandekKosar& kosar);
	AjandekKosar Keres(const std::string& nev);
	void Beolvas(const std::string& eleresi_ut);

private:
	std::vector<AjandekKosar> kosarak;
};


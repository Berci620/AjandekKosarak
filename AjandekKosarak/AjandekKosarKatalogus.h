#pragma once

#include "AjandekKosar.h"

class AjandekKosarKatalogus
{
public:
	void UjAjandekKosar(const AjandekKosar& kosar);
	AjandekKosar Keres(const std::string& nev);
	void Beolvas(const std::string& eleresi_ut);

public:
	friend std::ostream& operator<<(std::ostream& os, const AjandekKosarKatalogus& katalogus);

private:
	std::vector<AjandekKosar> kosarak;
};


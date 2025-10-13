#pragma once

#include <vector>

#include "AjandekMennyisegPar.h"

class AjandekKosar
{
public:
	AjandekKosar() = default;
	AjandekKosar(const std::string& nev);

	std::string nev;
	std::vector<AjandekMennyisegPar> ajandekok;

public:
	void UjAjandek(const std::string& tipus, const int mennyiseg);
};


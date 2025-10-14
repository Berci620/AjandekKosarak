#pragma once

#include <vector>

#include "AjandekMennyisegPar.h"

class AjandekKosar
{
private://Variables
	std::string nev;
	std::vector<AjandekMennyisegPar> ajandekok;

public:	//Constructors
	AjandekKosar() = default;
	AjandekKosar(const std::string& nev);

public:	//Operators
	friend std::ostream& operator<<(std::ostream& os, AjandekKosar ajandekKosar);

public:	//Getters
	const std::string& Nev() const;
	const std::vector<AjandekMennyisegPar>& Ajandekok() const;

public:	//Others
	void UjAjandek(const std::string& tipus, const int mennyiseg);

};


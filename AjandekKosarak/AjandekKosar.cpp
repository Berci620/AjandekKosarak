#pragma once

#include "AjandekKosar.h"

//--------------------------------------------------------------------------
//Constructors
AjandekKosar::AjandekKosar(const std::string& nev)
	:nev(nev)
{ }

//--------------------------------------------------------------------------
//Operators
std::ostream& operator<<(std::ostream& os, const AjandekKosar& ajandekKosar)
{
	os << ajandekKosar.nev << std::endl;
	for (const auto it : ajandekKosar.ajandekok)
	{
		os << it;
	}
	return os;
}

//--------------------------------------------------------------------------
//Getters
const std::string& AjandekKosar::Nev() const
{
	return nev;
}
const std::vector<AjandekMennyisegPar>& AjandekKosar::Ajandekok() const
{
	return ajandekok;
}

//--------------------------------------------------------------------------
//Others
void AjandekKosar::UjAjandek(const std::string& tipus, const int mennyiseg)
{
	AjandekMennyisegPar value = AjandekMennyisegPar{ ToAjandekTipus(tipus), mennyiseg };
	ajandekok.push_back(value);
}
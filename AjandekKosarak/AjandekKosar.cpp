#pragma once

#include "AjandekKosar.h"

AjandekKosar::AjandekKosar(const std::string& nev)
	:nev(nev)
{ }

void AjandekKosar::UjAjandek(const std::string& tipus, const int mennyiseg)
{
	AjandekMennyisegPar value = AjandekMennyisegPar{ ToAjandekTipus(tipus), mennyiseg };
	ajandekok.push_back(value);
}

std::ostream& operator<<(std::ostream& os, AjandekKosar ajandekKosar)
{
	os << ajandekKosar.nev << std::endl;
	for (const auto it : ajandekKosar.ajandekok)
	{
		os << it;
	}
	return os;
}
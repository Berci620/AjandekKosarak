#pragma once

#include <stdexcept>

#include "AjandekTipus.h"

std::map<AjandekTipus, std::string> AjandekTipusToString =
{
	{AjandekTipus::Kave, "Kave"},
	{AjandekTipus::Bor, "Bor"},
	{AjandekTipus::Pezsgo, "Pezsgo"},
	{AjandekTipus::Csokolade, "Csokolade"},
	{AjandekTipus::Desszert, "Desszert"},
	{AjandekTipus::Kezkrem, "Kezkrem"},
	{AjandekTipus::Tusfurdo, "Tusfurdo"}
};

std::string ToString(AjandekTipus a)
{
	return AjandekTipusToString[a];
}

AjandekTipus ToAjandekTipus(const std::string& s)
{
	//	for (auto it = AjandekTipusToString.begin(); it != AjandekTipusToString.end(); ++it)
	for(const auto& [first, second] : AjandekTipusToString) //	Ugyanaz mint az előző sor, csak rövidebben
	{
		if (second == s)
		{
			return first;
		}
	}

	throw std::invalid_argument("Az ajandek nem talalhato.");
}

std::ostream& operator<<(std::ostream& os, AjandekTipus ajandek)
{
	os << ToString(ajandek);
	return os;
}
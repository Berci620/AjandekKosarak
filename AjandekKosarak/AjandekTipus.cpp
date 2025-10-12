#pragma once

#include "AjandekTipus.h"

std::unordered_map<AjandekTipus, std::string> AjandekTipusToString =
{
	{AjandekTipus::Kave, "Kave"},
	{AjandekTipus::Bor, "Bor"},
	{AjandekTipus::Pezsgo, "Pezsgo"},
	{AjandekTipus::Csokolade, "Csokolade"},
	{AjandekTipus::Desszert, "Desszert"},
	{AjandekTipus::Kezkrem, "Kezkrem"},
	{AjandekTipus::Tusfurdo, "Tusfurdo"}
};

std::string string(AjandekTipus a)
{
	auto it = AjandekTipusToString.find(a);
	if (it != AjandekTipusToString.end())
	{
		return it->second;
	}
	return "";
}
#pragma once

#include <string>
#include <map>

enum class AjandekTipus
{
	Kave,
	Bor,
	Pezsgo,
	Csokolade,
	Desszert,
	Kezkrem,
	Tusfurdo
};

std::string ToString(const AjandekTipus a);
AjandekTipus ToAjandekTipus(const std::string& s);
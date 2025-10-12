#pragma once

#include <string>
#include <unordered_map>

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

std::string string(AjandekTipus a);
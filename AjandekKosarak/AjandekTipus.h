#pragma once

#include <string>
#include <map>
#include <iostream>

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

std::string ToString(const AjandekTipus a);	//Parser
AjandekTipus ToAjandekTipus(const std::string& s);	//String to AjandekTipus

std::ostream& operator<<(std::ostream& os, AjandekTipus ajandek);
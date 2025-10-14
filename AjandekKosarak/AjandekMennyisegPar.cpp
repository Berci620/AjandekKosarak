#pragma once

#include "AjandekMennyisegPar.h"

AjandekMennyisegPar::AjandekMennyisegPar(const AjandekTipus& tipus, const int mennyiseg)
{
	this->tipus = tipus;
	this->mennyiseg = mennyiseg;
}

std::ostream& operator<<(std::ostream& os, AjandekMennyisegPar ajandekMennyiseg)
{
	os << ToString(ajandekMennyiseg.tipus) << '(' << ajandekMennyiseg.mennyiseg << ')' << std::endl;
	return os;
}
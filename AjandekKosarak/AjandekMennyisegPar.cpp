#pragma once

#include "AjandekMennyisegPar.h"

//---------------------------------------------------------------------------------------------------
//Constructors
AjandekMennyisegPar::AjandekMennyisegPar(const AjandekTipus& tipus, const int mennyiseg)
{
	this->tipus = tipus;
	this->mennyiseg = mennyiseg;
}


//---------------------------------------------------------------------------------------------------
//Operators
std::ostream& operator<<(std::ostream& os, const AjandekMennyisegPar& ajandekMennyiseg)
{
	os << ToString(ajandekMennyiseg.tipus) << '(' << ajandekMennyiseg.mennyiseg << ')' << std::endl;
	return os;
}


//---------------------------------------------------------------------------------------------------
//Getters

AjandekTipus AjandekMennyisegPar::Tipus() const
{
	return tipus;
}

int AjandekMennyisegPar::Mennyiseg() const
{
	return mennyiseg;
}
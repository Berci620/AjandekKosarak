#pragma once

#include "AjandekTipus.h"

class AjandekMennyisegPar
{
public:	//Constructors
	AjandekMennyisegPar(const AjandekTipus& tipus, const int mennyiseg);

public:	//Operators
	friend std::ostream& operator<<(std::ostream& os, const AjandekMennyisegPar& ajandekMennyiseg);

public:	//Getters
	AjandekTipus Tipus() const;
	int Mennyiseg() const;

private:	//Variables
	AjandekTipus tipus;
	int mennyiseg;
};
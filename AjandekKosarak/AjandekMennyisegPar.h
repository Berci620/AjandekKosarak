#pragma once

#include "AjandekTipus.h"

class AjandekMennyisegPar
{
public:
	AjandekMennyisegPar(const AjandekTipus& tipus, const int mennyiseg);

public:
	friend std::ostream& operator<<(std::ostream& os, AjandekMennyisegPar ajandekMennyiseg);

private:
	AjandekTipus tipus;
	int mennyiseg;
};
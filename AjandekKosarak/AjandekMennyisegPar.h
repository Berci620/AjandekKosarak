#pragma once

#include "AjandekTipus.h"

class AjandekMennyisegPar
{
public:
	AjandekMennyisegPar(const AjandekTipus& tipus, const int mennyiseg);

private:
	AjandekTipus tipus;
	int mennyiseg;
};
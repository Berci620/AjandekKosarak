#include <iostream>

#include "AjandekTipus.h"

int main()
{
	AjandekTipus a = ToAjandekTipus("Bor");
	std::cout << ToString(a) << std::endl;
}
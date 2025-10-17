#include <iostream>
#include <fstream>

#include "AjandekKosarKatalogus.h"

int main()
{
	AjandekKosarKatalogus katalogus;
	katalogus.Beolvas("input.txt");
	auto tartalmazok = katalogus.melyikTartalmaz("Bor");
	std::cout << katalogus;
}
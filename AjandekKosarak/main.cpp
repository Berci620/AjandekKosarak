#include <iostream>
#include <fstream>

#include "AjandekKosarKatalogus.h"

int main()
{
	AjandekKosarKatalogus katalogus;
	katalogus.Beolvas("input.txt");
	std::cout << katalogus;
}
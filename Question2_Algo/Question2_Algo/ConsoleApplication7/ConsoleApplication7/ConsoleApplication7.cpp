// ConsoleApplication7.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "monstre.h"
#include <vector>
#include "jeu.h"
int main()
{
	std::vector<Monstre> allo;
	Monstre meh("allo", 10, 8, 30);
	Monstre meh1("allo", 10, 3, 30);
	Monstre meh2("allo", 10, 10, 30);
	//Monstre meh3("allo", 10, 20, 30);
	//Monstre meh4("allo", 10, 20, 30);
	//Monstre meh5("allo", 10, 20, 30);
	allo.push_back(meh);
	allo.push_back(meh1);
	allo.push_back(meh2);
	//allo.push_back(meh3);
	//allo.push_back(meh4);
	//allo.push_back(meh5);
	std::vector<Monstre> lol = programmationDynamique(allo, 15, 15);
    return 0;
}


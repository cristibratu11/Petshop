// PetShop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Animal.h"
#include "Dog.h"

void fillVector(std::vector<CDog>& newDogs)
{
	int iWeigth, iPrice;
	std::string sName, sRace;

	std::cout << "How many dogs you want to add?";
	int idogSize;
	std::cin >> idogSize;
	for (int i = 0; i < idogSize; i++)
	{
		std::cout << "Enter dog name: ";
		std::cin >> sName;
		std::cout << "Enter dog price: ";
		std::cin >> iPrice;
		std::cout << "Enter dog race: ";
		std::cin >> sRace;
		std::cout << "Enter dog weigth: ";
		std::cin >> iWeigth;

		CDog newDog;
	}
}

int main()
{
	std::ofstream myfile;
	myfile.open("data.txt");
	
	CDog Cristinel;
	Cristinel.SetName("Cristinel");
	Cristinel.SetPrice(1200);
	Cristinel.SetRace("Imperial");
	Cristinel.SetWeight(60);
	
	myfile << Cristinel.GetName().c_str() << " " << Cristinel.GetPrice() << " " << Cristinel.GetRace().c_str() << " " << Cristinel.GetWeight();
	myfile.close();
	
	//std::cout << Cristinel.GetName().c_str() << std::endl;
	//Cristinel.action();
	std::vector<CDog> Dogs;
	int opt=1;
	while (opt != 0)
	{
		std::cout << "\t Meniu:";
		std::cout << "\n0.Iesire:";
		std::cout << "\n1.Adaugare:";
		std::cout << "\n2.Afisare:";
		std::cout << "\nIntroduceti optiunea:";
		std::cin >> opt;
		switch (opt)
		{
		case 1: std::cout << "Santier\n\n";
				break;

		case 2: std::cout << "Santier mai mare\n\n";
				break;

		case 0: exit(0);
		default:std::cout << "Introduceti alta valoare\n\n";
		}
		system("PAUSE");
	}
    return 0;
}


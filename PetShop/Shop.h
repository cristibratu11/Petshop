#pragma once
#include "stdafx.h"
#include "Animal.h"
class CShop
{
private:
	std::vector<CAnimal*> m_Animal;
public:
	CShop();
	~CShop();
	void SetAnimal(CAnimal* animal);
	std::vector<CAnimal*> GetAnimals(); // doua metode --cate elemente ai ---- returnezi indexul 
};
// cum adaugi chestii in listele din std pointer/fara pointer

CShop shop;

shop.GetAnimals().push_back()
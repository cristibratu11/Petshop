#include "stdafx.h"
#include "Shop.h"


CShop::CShop()
{
}


CShop::~CShop()
{
}

void CShop::SetAnimal(CAnimal animal)
{
	m_Animal.push_back(animal);
}

std::vector<CAnimal> CShop::GetAnimals()
{
	return m_Animal;
}

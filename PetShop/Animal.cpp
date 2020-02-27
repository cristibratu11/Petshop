#include "stdafx.h"
#include "Animal.h"


CAnimal::CAnimal()
{
}


CAnimal::~CAnimal()
{
}

void CAnimal::SetID(int iID)
{
	m_ID = iID;
}

int CAnimal::GetId()
{
	return m_ID;
}

void CAnimal::SetWeight(int iWeigth)
{
	m_weigth = iWeigth;
}

int CAnimal::GetWeight()
{
	return m_weigth;
}

void CAnimal::SetPrice(int iPrice)
{
	m_price = iPrice;
}

int CAnimal::GetPrice()
{
	return m_price;
}

void CAnimal::SetName(std::string sName)
{
	m_name = sName;
}

std::string CAnimal::GetName()
{
	return m_name;
}

void CAnimal::SetRace(std::string sRace)
{
	m_race = sRace;
}

std::string CAnimal::GetRace()
{
	return m_race;
}

void CAnimal::action()
{
	std::cout << "I do nothing!";
}

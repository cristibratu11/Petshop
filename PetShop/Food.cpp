#include "stdafx.h"
#include "Food.h"


CFood::CFood()
{
}


CFood::~CFood()
{
}

void CFood::SetPrice(int iPrice)
{
	m_price = iPrice;
}

int CFood::GetPrice()
{
	return m_price;
}

void CFood::SetQuantity(int iQuantity)
{
	m_quantity = iQuantity;
}

int CFood::GetQuantity()
{
	return m_quantity;
}

void CFood::SetType(std::string sType)
{
	m_type = sType;
}

std::string CFood::GetType()
{
	return m_type;
}

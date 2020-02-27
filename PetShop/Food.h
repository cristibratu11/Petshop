#pragma once
#include "stdafx.h"
class CFood
{
private:
	int m_price, m_quantity;
	std::string m_type;
public:
	CFood();
	~CFood();
	void SetPrice(int iPrice);
	int GetPrice();
	void SetQuantity(int iQuantity);
	int GetQuantity();
	void SetType(std::string sType);
	std::string GetType();
};
#pragma once
#include "stdafx.h"
class CAnimal
{
private:
	int m_weigth, m_price, m_ID;
	std::string m_name, m_race;
public:
	CAnimal();
	~CAnimal();
	void SetID(int iID);
	int GetId();
	void SetWeight(int iWeigth);
	int GetWeight();
	void SetPrice(int iPrice);
	int GetPrice();
	void SetName(std::string sName);
	std::string GetName();
	void SetRace(std::string sRace);
	std::string GetRace();

	virtual void action();
};



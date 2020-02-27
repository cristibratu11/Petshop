#include "stdafx.h"
#include "Human.h"

Chuman::Chuman()
{
}

Chuman::~Chuman()
{
}

void Chuman::SetAge(int iAge)
{
	m_age = iAge;
}

int Chuman::GetAge()
{
	return m_age;
}

std::string Chuman::GetGender()
{
	return m_gender;
}


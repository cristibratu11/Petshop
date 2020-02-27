#pragma once
class Chuman
{
private:
	int m_age;
	std::string m_gender;
public:
	Chuman();
	~Chuman();
	void SetAge(int iAge);
	int GetAge();
	void SetGender(std::string sGender);
	std::string GetGender();

};

//camelcase -- java 
// underscore --- python 
//microsoft c# -- litera mare //  membrii la prop 
// topdown  ==== cum vreau sa il folosesc
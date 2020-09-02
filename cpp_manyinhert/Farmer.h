#pragma once
#include <string>
using namespace std;
class Farmer
{
public:
	Farmer(string _name = "jack");
	virtual ~Farmer();
	void sow();
protected:
	string m_strName;
};


#pragma once
#include <string>
using namespace std;
class Worker
{
public:
	Worker(string _code="001");
	virtual ~Worker();
	void carry();
protected:
	string m_strCode;
};


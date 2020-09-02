#include "Worker.h"
#include <iostream>
using namespace std;
Worker::Worker(string _code)
{
	m_strCode = _code;
	cout << "Worker::Worker()" << endl;
}

Worker::~Worker()
{
	cout << "Worker::~Worker()" << endl;
}

void Worker::carry()
{
	cout <<"void Worker::carry()"<<endl;
	cout << m_strCode << endl;
}

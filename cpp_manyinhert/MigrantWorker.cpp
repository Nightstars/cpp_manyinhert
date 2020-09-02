#include "MigrantWorker.h"
#include <iostream>
using namespace std;
MigrantWorker::MigrantWorker(string _name, string _code) :Farmer(_name), Worker(_code)
{
	cout << "MigrantWorker::MigrantWorker()" << endl;
}

MigrantWorker::~MigrantWorker()
{
	cout << "MigrantWorker::~MigrantWorker()" << endl;
}

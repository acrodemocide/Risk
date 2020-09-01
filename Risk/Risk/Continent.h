#pragma once
#include <string>
#include <vector>
using namespace std;

#include "Territory.h"

class Continent
{
private:
	string _name;
	vector<Territory> _territories;
public:
	Continent(string name);
	string getName();
};
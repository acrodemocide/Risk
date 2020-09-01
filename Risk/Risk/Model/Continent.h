#pragma once
#include <string>
#include <vector>
using namespace std;

#include "Territory.h"

struct Continent
{
	string _name;
	vector<Territory> _territories;
};
#pragma once
using namespace std;
#include <vector>
#include <string>

#include "Model\Continent.h"

class GameBoard
{
private:
	vector<Continent> _continents;
	void InitializeBoard();
public:
	GameBoard();
	Continent getContinent(string name);
};
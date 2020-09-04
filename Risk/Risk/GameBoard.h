#pragma once
using namespace std;
#include <vector>
//#include <map>
#include <string>

#include "Model\Continent.h"

//enum Continent_Name { AUSTRALIA, SOUTH_AMERICA, AFRICA, NORTH_AMERICA, EUROPE, ASIA };

struct Move
{
	string fromTerritory;
	string toTerritory;
};

class GameBoard
{
private:
	//Continent_Name _continent_name;
	vector<Continent> _continents;

	void InitializeAutralia();
	void InitializeSouthAmerica();
	void InitializeAfrica();
	void InitializeNorthAmerica();
	void InitializeEurope();
	void InitializeAsia();

	void InitializeBoard();
public:
	GameBoard();
	Continent GetContinent(string name);
	vector<Move> GetPossibleMoves(Team t);
};
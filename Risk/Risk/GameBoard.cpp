#include "GameBoard.h"

void GameBoard::InitializeBoard()
{
	// TODO: implement
	int i = 0;
}

// TODO: Determine if the initializer list here is necessary -- we may be able to forgo this
GameBoard::GameBoard() : _continents()
{
	InitializeBoard();
}

Continent GameBoard::getContinent(string name)
{
	// TODO: implement
	return _continents[0];
}
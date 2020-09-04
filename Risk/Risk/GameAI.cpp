#include "GameAI.h"

Move GameAI::CalculateMove()
{
	throw "Not implemented";
}

GameAI::GameAI(GameBoard* b, Team t)
{
	_board = b;
	_team = t;
}

void GameAI::Attack()
{
	throw "Not implemented";
}

void GameAI::ReinforcementPhase()
{
	throw "Not implemented";
}

void GameAI::PlaceTroops()
{
	throw "Not implemented";
}
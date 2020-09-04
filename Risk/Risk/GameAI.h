#pragma once
#include "GameBoard.h"
 
class GameAI
{
private:
	GameBoard* _board;
	Team _team;

	Move CalculateMove();

public:
	GameAI(GameBoard* b, Team t);
	void Attack();
	void ReinforcementPhase();
	void PlaceTroops();
};
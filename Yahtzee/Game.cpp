#include <iostream>

#include "Game.h"
#include "ScoreCard.h"

using namespace std;

Game::Game() {}

Game::~Game() {}

void Game::startGame()
{
	system("cls");

	ScoreCard::printScorecard();
}

void Game::viewHistoricScorecards() {}


#pragma once
#include "Player.h"
#include <string>


class PlayerContainer
{
public:
	PlayerContainer();
	~PlayerContainer();
	
	static void choosePlayer();
	static void addPlayer();
	static void removePlayer();
	static void sortByName();
	static void sortByScore();
	
	static void showPlayerMenu();

	static void encrypt();
	static void decrypt();

private:
	int MAX_PLAYERS = 10;
};


#pragma once
#include <iostream>

class Dice
{
public:
	Dice(int id);
	~Dice();

	int roll();
	void lock();
	void unlock();

	bool isLocked();
	int getDiceValue();

	void createDice();

private:
	const int NO_VALUE = -1;
	const int MAX_DICE = 5;

	bool locked = false;
	int value = NO_VALUE;

	int diceID;
};




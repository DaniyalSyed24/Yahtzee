#include "Dice.h"
#include <list>

using namespace std;

Dice::Dice(int id) : diceID(id) {}

Dice::~Dice() {}

list <Dice> dice;

int Dice::roll()
{
	if (!locked)
	{
		value = (rand() % 6 + 1);
	}

	return value;
}

void Dice::lock()
{
	locked = true;
}

void Dice::unlock()
{
	locked = false;
}

bool Dice::isLocked()
{
	return locked;
}

int Dice::getDiceValue()
{
	return value;
}

void Dice::createDice()					// created 5 dice
{
	for (int i = 0; i < MAX_DICE; i++)
	{
		dice.push_back(Dice(i));
	}
}
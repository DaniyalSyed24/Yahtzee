#include "ScoreCard.h"
#include <iostream>

using namespace std;

int total;

ScoreCard::ScoreCard(string playerName) : name(playerName)
{
	aces = 0;
	twos = 0;
	threes = 0;
	fours = 0;
	fives = 0;
	sixes = 0;
	total = aces + twos + threes + fours + fives + sixes;
}

ScoreCard::~ScoreCard() {}


/*
int ScoreCard::getTotalScore()
{
	int total;
	total = aces + twos + threes + fours + fives + sixes;
	return total;
}
*/

void ScoreCard::printScorecard()
{
	cout << " ---- SCORECARD ----" << endl;
	cout << "  Aces: " << "	" << endl;
	cout << "  Twos: " << "	" << endl;
	cout << "  Threes: " << "	" << endl;
	cout << "  Fours: " << "	" << endl;
	cout << "  Fives: " << "	" << endl;
	cout << "  Sixes: " << "	" << endl;
	cout << " ------------------- " << endl;
	cout << " Total: " << total << endl;
	cout << " ------------------- " << endl;

	cout << endl;
	cout << endl;

	printDice();
	move();
}

void ScoreCard::printDice()
{
	cout << "Dice 1		";
	cout << "Dice 2		";
	cout << "Dice 3		";
	cout << "Dice 4		";
	cout << "Dice 5		" << endl;
}

void ScoreCard::move()
{
	int val;
	cout << endl;
	cout << " Please choose how to score your dice." << endl;
	cout << " 1:	Aces" << endl;
	cout << " 2:	Twos" << endl;
	cout << " 3:	Threes" << endl;
	cout << " 4:	Fours" << endl;
	cout << " 5:	Fives" << endl;
	cout << " 6:	Sixes" << endl;
	cout << endl;
	cout << " Score against: ";
	cin >> val;

	switch (val)
	{
	case 1: cout << "Aces"; break;
	case 2: cout << "Twos"; break;
	case 3: cout << "Threes"; break;
	case 4: cout << "Fours"; break;
	case 5: cout << "Fives"; break;
	case 6: cout << "Sixes"; break;
	case 9: break;
	default:
		cout << "Invalid input\n";
	}
}
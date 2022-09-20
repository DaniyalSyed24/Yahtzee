#pragma once
#include <iostream>

using namespace std;

class ScoreCard
{
public:
	ScoreCard(string);
	~ScoreCard();

	string name;

	static void printScorecard();
	static void printDice();
	static void move();

	//void setScore(int, int);
	//int getTotalScore();

private:
	int aces;
	int twos;
	int threes;
	int fours;
	int fives;
	int sixes;
};
#include "Player.h"
#include "ScoreCard.h"

#include <iostream>


Player::Player(string name, string password)
{
	playerName = name;
	playerPassword = password;
	highestScore = 0;
}

Player::~Player()
{}

string Player::getName()
{
	return playerName;
}

void Player::setName(string name)
{
	playerName = name;
}

string Player::getPassword()
{
	return playerPassword;
}

void Player::setPassword(string password)
{
	playerPassword = password;
}

int Player::getHighestScore()
{
	return highestScore;
}

void Player::displayPlayer()
{
	cout <<  getName() << "---------------" << getHighestScore() << endl;
}
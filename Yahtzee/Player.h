#pragma once
#include <string>

using namespace std;

class Player
{
public:
	Player(string name, string password);
	~Player();

	string getName();
	void setName(string name);
	string getPassword();
	void setPassword(string password);
	int getHighestScore();

	void displayPlayer();

private:
	string playerName;
	string playerPassword;

	int highestScore;
};


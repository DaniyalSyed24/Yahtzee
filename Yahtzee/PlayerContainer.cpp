#include "PlayerContainer.h"
#include "Game.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


string name;
string password;

vector<pair<string, string>> players;

/*
void operator<<(ostream& COUT, Player& player) {
	COUT << "Name: " << name << endl;
	COUT << "Password: " << password << endl;
}
*/

PlayerContainer::PlayerContainer()
{}

PlayerContainer::~PlayerContainer()
{}

void PlayerContainer::encrypt() // increase ascii of password
{
	char str[100];
	password = str;
	
	for (int i = 0; i < 100; i++)
		str[i] = str[i] + 1;
}

void PlayerContainer::decrypt() // decrease ascii of password
{
	char str[100];
	password = str;

	for (int i = 0; i < 100; i++)
		str[i] = str[i] - 1;
}

void PlayerContainer::choosePlayer()
{
	string checkName;
	string checkPassword;

	cout << " Please enter player name: ";
	cin >> checkName;

	if (checkName == name) {
		cout << " Please enter player password: ";
		cin >> checkPassword;
	}

	if (checkPassword == password)
	{
		showPlayerMenu();
	}
	else cout << "password is incorrect.";
}

void PlayerContainer::addPlayer()
{
	cout << " Please enter player name: ";
	cin >> name;

	cout << " Please enter player password: ";
	cin >> password;

	players.push_back(make_pair(name, password));

	cout << "player " << name <<" has been created!" << endl;

	Player player = Player(name, password);

	player.setName(name);
	player.setPassword(password);

	ofstream output( name + ".txt");
	if (output.is_open())
	{
		output << name;
		output << " ";
		output << password;
		output << endl;
		output.close();
	}
	else
	{
		cout << "Cannot open file for writing";
	}

	Source:showPlayerMenu();
}

void PlayerContainer::removePlayer()
{
	cout << " Please enter player name: ";
	cin >> name;

	cout << " Please enter player password: ";			
	cin >> password;
	
	string filename = name + ".txt";

	if (remove((filename).c_str()) != 0)
		cout << "User " << name << " does not exist";
	else
		cout << "User " << name << " had successfully been deleted!";
	
}

bool compareByName(pair<string, string> p1, pair<string, string>p2)
{
	return p1.first < p2.first;
};

bool compareByScore(pair<string, string> p1, pair<string, string>p2)
{
	return p1.second < p2.second;
};

void PlayerContainer::sortByName()
{
	sort(players.begin(), players.end(), compareByName);
}

void PlayerContainer::sortByScore()	
{
	sort(players.begin(), players.end(), compareByScore);
}

void PlayerContainer::showPlayerMenu()
{
	system("cls");

	cout << "Welcome to Champion Yahtzee " << name << endl;;
	cout << "--------------------------------------" << endl;

	cout << "Highest Score: " << endl;
	cout << "Total Games: " << endl;
	cout << "Accumulated Score: " << endl;
	cout << "Average Score: " << endl;
	cout << endl;

	cout << "1) Play gamee" << endl;
	cout << "2) View historic scorecards" << endl;
	cout << "9) Return to player chooser screen" << endl;

	int value;

	cout << " Please choose an option: ";
	cin >> value;

	switch (value)
	{
	case 1: Game::startGame(); break;
	case 2: Game::viewHistoricScorecards(); break;
	case 9: break;
	default:
		cout << "Invalid input\n";
	}

	players.clear(); 
}
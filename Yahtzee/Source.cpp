#include <iostream>
#include <stdlib.h>
#include <algorithm>

#include "Player.h";
#include "PlayerContainer.h"


using namespace std;


int main()
{
#ifdef _DEBUG
	//_CrtSetBreakAlloc(160);
	_onexit(_CrtDumpMemoryLeaks);
#endif
	int* value = (int*)malloc(sizeof(int) * 10);

	do {
		system("cls");

		cout << " Welcome to Champion Yahtzee " << endl;
		cout << " ---------------------------" << endl;;
		cout << endl;
		cout << " Player Name		Highest Score" << endl;;
		cout << " -----------		--------------" << endl;
		cout << endl;
		cout << endl;
		cout << " 1) Choose Player" << endl;
		cout << " 2) Add Player" << endl;
		cout << " 3) Remove Player" << endl;
		cout << " 4) Sort players alphabetically" << endl;
		cout << " 5) Sort by highest score" << endl;
		cout << " 9) Exit" << endl;
		cout << endl;
		cout << endl;

		cout << " Please choose an option: ";
		cin >> *value;

		switch (*value)
		{
		case 1: PlayerContainer::choosePlayer(); break;
		case 2: PlayerContainer::addPlayer(); break;
		case 3: PlayerContainer::removePlayer(); break;
		case 4: PlayerContainer::sortByName(); break;
		case 5: PlayerContainer::sortByScore(); break;
		case 9: break;
		default:
			cout << "Invalid input" << endl;
		}
		return 0;

	} while (*value != 9);

	free(value);
	value = nullptr;
}
#include <iostream>
#include <ctime>
#include <windows.h> 
#include "HomeTask7_1.h"

using namespace std;

int main()
{
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);


	int matches = 20;
	bool currentPlayer = true;

	while (matches > 0)
	{
		MatchesOut(matches);

		int move;
		int retflag;
		NewFunction(currentPlayer, move, matches, retflag);
		if (retflag == 3) continue;

		matches -= move;
		currentPlayer = !currentPlayer;
	}
	SetConsoleTextAttribute(hConsole, 20);

	EndGame(currentPlayer);
}

void EndGame(bool currentPlayer)
{
	if (currentPlayer == false)
	{
		cout << "First player won!";
	}
	else
	{
		cout << "Second player won!";
	}
}

void MatchesOut(int matches)
{
	for (int i = 1; i <= matches; i++)
	{
		cout << "|";
	}
	cout << endl;
}

void NewFunction(bool currentPlayer, int& move, int matches, int& retflag)
{
	retflag = 1;
	if (currentPlayer == true)
	{
		cout << "Player 1 make ur moove:" << endl;
	}
	else
	{
		cout << "Player 2 make ur move:" << endl;
	}

	cin >> move;
	if (move > 3 || move < 1 || move > matches)
	{
		cout << "Invalid namber" << endl;
		{ retflag = 3; return; };
	}
}

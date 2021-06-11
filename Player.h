#pragma once
#include <iostream>
#include "Karta.h"
#include "Croupier.h"
#include <vector>
using namespace std;
class Player
{
private:
	vector<Karta> hand;
	string name;
	int score;
	int bank;
public:
	Player()
	{

	};
	int getScore();
	void takeCard();

};


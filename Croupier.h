#pragma once
#include <iostream>
#include "Karta.h"
#include <vector>
using namespace std;
class Croupier
{
private:
	vector<Karta> deck;
public:
	Croupier() 
	{
		for (int i = 2;i < 15;i++) {
			for (int j = 0;j < 4;j++)
				deck.push_back(Karta(j, i));
		}
	}
	void getDeck();
	void showDeck();
	void giveCard();
	void shuffle();
	
}
;
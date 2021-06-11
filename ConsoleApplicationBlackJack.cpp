#include <iostream>
#include "Karta.h"
#include "Croupier.h"
#include "Player.h"
using namespace std;

int main()
{
	Croupier qq;
	qq.showDeck();
	Karta card(2, 14);
	cout << card.showCard() << card.getValue();

}



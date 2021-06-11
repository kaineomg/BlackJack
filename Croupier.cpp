#include "Croupier.h"

void Croupier::getDeck()
{
	return ;

}

void Croupier::showDeck()
{

	for (int i = 0;i < 52;i++)
	{
		cout<<deck.at(i).showCard()<<endl;
}

}

void Croupier::giveCard()
{
	
}

void Croupier::shuffle()
{
	
	for (int k = 0; k < deck.size(); k++) {
		int r = k + rand() % (deck.size() - k);
		swap(deck[r], deck[k]);
	}


}

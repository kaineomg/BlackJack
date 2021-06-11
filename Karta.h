#pragma once
#include <iostream>
#include<string>
using namespace std;
class Karta
{
private:
	int mast;
	int znachenie;
public:
	Karta(int mast_, int znachenie_) :mast{ mast_ }, znachenie{ znachenie_ }
	{


	}
	int getValue();
	int getMast();
	int getZnach();
	string showCard();
};


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include"card.h"

using namespace std;
Card::Card()
{
	suit = "";
	rank = "";
}

Card::Card(string suit, string rank)
{
	this->suit = suit;
	this->rank = rank;
}

void Card::PrintCard()
{
	cout << rank << " of " << suit << "\n";
}

bool Card::operator!=(Card card2)
{
	if(suit != card2.suit || rank != card2.rank)
		return true;
	return false;
}




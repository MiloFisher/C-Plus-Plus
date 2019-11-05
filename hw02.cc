//=============================
// Programmer: Milo Fisher
// HW02
// Professor Kath
// CS1C TTH 12:30-2:50
//=============================
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include"card.h"

using namespace std;

const int DECK_SIZE = 52;

void InitializeDeck(Card deck[])
{
	int deckIterator = 0;
	for(int suit = 0; suit < 4; suit++)
	{
		for(int rank = 0; rank < 13; rank++)
		{
			string s;
			string r;
			switch(suit)
			{
			case 0: s = "Spades"; break;
			case 1: s = "Hearts"; break;
			case 2: s = "Clubs"; break;
			case 3: s = "Diamonds"; break;
			}
			switch(rank)
			{
			case 0: r = "A"; break;
			case 1: r = "2"; break;
			case 2: r = "3"; break;
			case 3: r = "4"; break;
			case 4: r = "5"; break;
			case 5: r = "6"; break;
			case 6: r = "7"; break;
			case 7: r = "8"; break;
			case 8: r = "9"; break;
			case 9: r = "10"; break;
			case 10: r = "J"; break;
			case 11: r = "Q"; break;
			case 12: r = "K"; break;
			}
			Card card(s,r);
			deck[deckIterator] = card;
			deckIterator++;
		}
	}
}

void PerfectShuffle(Card deck[])
{
	vector<Card> shuffledDeck;
	for(int i = 0; i < 27; i++)
	{
		shuffledDeck.push_back(deck[i]);
		shuffledDeck.push_back(deck[i+26]);
	}
	for(int i = 0; i < DECK_SIZE; i++)
		deck[i] = shuffledDeck[i];
}

void DisplayDeck(Card deck[])
{
	for(int i = 0; i < DECK_SIZE; i++)
		deck[i].PrintCard();
	cout << endl;
}

void CopyDeck(Card deck1[], Card deck2[])
{
	for(int i = 0; i < DECK_SIZE; i++)
		deck2[i] = deck1[i];
}

bool CompareDecks(Card deck1[], Card deck2[])
{
	for(int i = 0; i < DECK_SIZE; i++)
	{
		if(deck1[i] != deck2[i])
			return false;
	}
	return true;
}

int main()
{
	Card deck [DECK_SIZE];
	Card shuffledDeck[DECK_SIZE];

	InitializeDeck(deck);
	DisplayDeck(deck);

	CopyDeck(deck,shuffledDeck);
	PerfectShuffle(shuffledDeck);
	DisplayDeck(shuffledDeck);

	int times = 1;
	while(!CompareDecks(deck,shuffledDeck) && times != 999999)
	{
		times++;
		PerfectShuffle(shuffledDeck);
	}

	cout << "Shuffled the deck " << times << " times to make it normal again.";
	return 0;
}





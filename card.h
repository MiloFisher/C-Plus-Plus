#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
class Card
{
private:
	string suit;
	string rank;
public:
	Card();
	Card(string suit, string rank);
	~Card(){}
	void PrintCard();
	bool operator!=(Card card2);
};

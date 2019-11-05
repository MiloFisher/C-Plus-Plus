//=============================
// Programmer: Milo Fisher
// HW01
// Professor Kath
// CS1C TTH 12:30-2:50
//=============================
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int Random(){return rand()%900 + 100;}

int main()
{
	srand(time(NULL));

	enum a{n};

	typedef int b;

	char input;

	bool again = false;

	b numbers[10];
	b alteredNumbers[10];
	string reverse[10];

	do
	{
		for(b i = 0; i < 10; i++)
			numbers[i] = Random();
		int n = sizeof(numbers)/sizeof(numbers[0]);
		sort(numbers,numbers+n);
		do{
		cout << "Would you like to:\nA) Sum the digits\nB) Triple the number\nC) Reverse the digits\n";
		cin >> input;
		}while('A' != toupper(input) && 'B' != toupper(input) && 'C' != toupper(input));

		switch(toupper(input))
		{
		case 'A':
				//sum digits
				cout << "\nHere are the summed digits:\n";
				for(b i = 0; i < 10; i++)
				{
					cout << numbers[i] << "\t";
					b x = numbers[i]/100;
					b y = (numbers[i]%100)/10;
					b z = ((numbers[i]%100)%10);
					alteredNumbers[i] = x+y+z;
					cout << alteredNumbers[i] << "\n";
				}
				break;
		case 'B':
				//triple number
				cout << "\nHere are the tripled values:\n";
				for(b i = 0; i < 10; i++)
				{
					cout << numbers[i] << "\t";
					alteredNumbers[i] = numbers[i]*3;
					cout << alteredNumbers[i] << "\n";
				}
				break;
		case 'C':
				//reverse digits
				cout << "\nHere are the reverse digits:\n";
				for(b i = 0; i < 10; i++)
				{
					cout << numbers[i] << "\t";
					b x = numbers[i]/100;
					b y = (numbers[i]%100)/10;
					b z = ((numbers[i]%100)%10);
					reverse[i] = to_string(z) + to_string(y) + to_string(x);
					cout << reverse[i] << "\n";
				}
				break;
		}

		cout << "Run again? Y/N\n";
		cin >> input;
		if(toupper(input) == 'Y')
			again = true;
		else
			again = false;
	}while(again);
	return 0;
}





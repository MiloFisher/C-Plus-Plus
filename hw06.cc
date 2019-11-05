//=============================
// Programmer: Milo Fisher
// HW06
// Professor Kath
// CS1C TTH 12:30-2:50
//=============================

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string reversal(string &input, int start, int end)
{
	string temp = input.substr(start,1);
	input.replace(start,1,input.substr(end,1));
	input.replace(end,1,temp);
	if(abs(start - end) <= 1)
		return input;
	return reversal(input,++start,--end);
}

string loopReversal(string &input, int start, int end)//extra credit
{
	for(int i = 0; i < float(end-start)/2; i++)
	{
		string temp = input.substr(start + i,1);
		input.replace(start + i,1,input.substr(end - i,1));
		input.replace(end - i,1,temp);
	}
	return input;
}

int main()
{
	string a;

	cout << "Using a Recursive Function:\n";
	a = "abcdefghijklmnopqrstuvwxyz";
	cout << reversal(a,11,18) << endl;
	a = "abcdefghijklmnopqrstuvwxyz";
	cout << reversal(a,4,22) << endl;
	a = "abcdefghijklmnopqrstuvwxyz";
	cout << reversal(a,0,25) << endl;

	cout << "\nUsing a Loop Function:\n";
	a = "abcdefghijklmnopqrstuvwxyz";
	cout << loopReversal(a,11,18) << endl;
	a = "abcdefghijklmnopqrstuvwxyz";
	cout << loopReversal(a,4,22) << endl;
	a = "abcdefghijklmnopqrstuvwxyz";
	cout << loopReversal(a,0,25) << endl;
	return 0;
}

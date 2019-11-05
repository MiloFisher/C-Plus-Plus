#include<iostream>
#include"date.h"
using namespace std;

Date::Date()
{
	month = 0;
	day = 0;
	year = 0;
}

Date::Date(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}

void Date::print()
{
	string m = "";
	string d = "";
	string y = "";
	if(month < 10)
		m = "0";
	if(day < 10)
		d = "0";
	if(year < 10)
		y = "0";
	cout << m << month << "/" << d << day << "/" << y << year << endl;
}

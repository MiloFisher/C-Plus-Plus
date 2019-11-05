#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>
using namespace std;

class Time
{
public:
	Time();
	Time(int hrs, int min, int sec);
	friend ostream& operator<<(ostream&,const Time&);
private:
	int hours;
	int minutes;
	int seconds;
};

#endif

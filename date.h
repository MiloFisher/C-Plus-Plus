#ifndef DATE_H_
#define DATE_H_
#include<iostream>
using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;
public:
	Date();
	Date(int m, int d, int y);
	~Date(){};
	void print();
};

#endif

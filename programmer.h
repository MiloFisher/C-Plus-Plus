#ifndef PROGRAMMER_H_
#define PROGRAMMER_H_
#include<iostream>
#include"employee.h"
using namespace std;

class Programmer: public Employee
{
private:
	int deptNum;
	string supName;
	float salIncr;
	bool cplusplus;
	bool java;
public:
	Programmer();
	Programmer(string n, int i, long long p, int a, char g, string j, int s, Date h, int d, string su, float sa, bool c, bool ja);
	~Programmer(){}
	void setDepartmentNumber(int x);
	void setSupervisorName(string x);
	void setSalaryPercentIncrease(float x);
	void setUsesCPlusPlus(bool x);
	void setUsesJava(bool x);
	void printInfo();
};

#endif

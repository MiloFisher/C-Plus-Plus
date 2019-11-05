#ifndef SOFTWAREARCHITECT_H_
#define SOFTWAREARCHITECT_H_
#include<iostream>
#include"employee.h"
using namespace std;
class SoftwareArchitect: public Employee
{
private:
	int deptNum;
	string supName;
	float salIncr;
	int yearsOfExp;
public:
	SoftwareArchitect();
	SoftwareArchitect(string n, int i, long long p, int a, char g, string j, int s, Date h, int d, string su, float sa, int y);
	~SoftwareArchitect(){}
	void setDepartmentNumber(int x);
	void setSupervisorName(string x);
	void setSalaryPercentIncrease(float x);
	void setYearsOfExperience(int x);
	void printInfo();
};
#endif

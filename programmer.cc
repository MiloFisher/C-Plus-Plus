#include<iostream>
#include"programmer.h"
using namespace std;

Programmer::Programmer()
{
	name = "";
	id = 0;
	phoneNumber = 0;
	age = 0;
	gender = '\0';
	jobTitle = "";
	salary = 0;
	Date h;
	hireDate = h;
	deptNum = 0;
	supName = "";
	salIncr = 0;
	cplusplus = false;
	java = false;
}

Programmer::Programmer(string n, int i, long long p, int a, char g, string j, int s, Date h, int d, string su, float sa, bool c, bool ja)
{
	name = n;
	id = i;
	phoneNumber = p;
	age = a;
	gender = g;
	jobTitle = j;
	salary = s;
	hireDate = h;
	deptNum = d;
	supName = su;
	salIncr = sa;
	cplusplus = c;
	java = ja;
}

void Programmer::setDepartmentNumber(int x)
{
	deptNum = x;
}

void Programmer::setSupervisorName(string x)
{
	supName = x;
}

void Programmer::setSalaryPercentIncrease(float x)
{
	salIncr = x;
}

void Programmer::setUsesCPlusPlus(bool x)
{
	cplusplus = x;
}

void Programmer::setUsesJava(bool x)
{
	java = x;
}

void Programmer::printInfo()
{
	cout << "Programmer Info:\nName: " << name << "\nID: " << id << "\nPhone Number: " << phoneNumber << "\nAge: " << age << "\nGender: " << gender << "\nJob Title: " << jobTitle << "\nSalary: $" << salary << "\nHire Date: "; hireDate.print(); cout << "Department Number: " << deptNum << "\nSupervisor Name: " << supName << "\nSalary Percent Increase: " << salIncr << "%\nKnows C++: ";
	if(cplusplus)
		cout << "Yes";
	else
		cout << "No";
	cout << "\nKnows Java: ";
	if(java)
		cout << "Yes\n\n";
	else
		cout << "No\n\n";
}



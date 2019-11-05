#include<iostream>
#include"softwareArchitect.h"
using namespace std;

SoftwareArchitect::SoftwareArchitect()
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
	yearsOfExp = 0;
}

SoftwareArchitect::SoftwareArchitect(string n, int i, long long p, int a, char g, string j, int s, Date h, int d, string su, float sa, int y)
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
	yearsOfExp = y;
}

void SoftwareArchitect::setDepartmentNumber(int x)
{
	deptNum = x;
}

void SoftwareArchitect::setSupervisorName(string x)
{
	supName = x;
}

void SoftwareArchitect::setSalaryPercentIncrease(float x)
{
	salIncr = x;
}

void SoftwareArchitect::setYearsOfExperience(int x)
{
	yearsOfExp = x;
}

void SoftwareArchitect::printInfo()
{
	cout << "Software Architect Info:\nName: " << name << "\nID: " << id << "\nPhone Number: " << phoneNumber << "\nAge: " << age << "\nGender: " << gender << "\nJob Title: " << jobTitle << "\nSalary: $" << salary << "\nHire Date: ";
	hireDate.print();
	cout << "Department Number: " << deptNum << "\nSupervisor Name: " << supName << "\nSalary Percent Increase: " << salIncr << "%\nYears of experience: " << yearsOfExp << "\n\n";
}







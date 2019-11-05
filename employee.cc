#include<iostream>
#include"employee.h"
#include"date.h"
using namespace std;

Employee::Employee()
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
}

Employee::Employee(string n, int i, long long p, int a, char g, string j, int s, Date h)
{
	name = n;
	id = i;
	phoneNumber = p;
	age = a;
	gender = g;
	jobTitle = j;
	salary = s;
	hireDate = h;
}

void Employee::setName(string x)
{
	name = x;
}

void Employee::setID(int x)
{
	id = x;
}

void Employee::setPhoneNumber(long long x)
{
	phoneNumber = x;
}

void Employee::setAge(int x)
{
	age = x;
}

void Employee::setGender(char x)
{
	gender = x;
}

void Employee::setJobTitle(string x)
{
	jobTitle = x;
}

void Employee::setSalary(int x)
{
	salary = x;
}

void Employee::setHireDate(Date x)
{
	hireDate = x;
}

void Employee::printInfo()
{
	cout << "Employee Info:\nName: " << name << "\nID: " << id << "\nPhone Number: " << phoneNumber << "\nAge: " << age << "\nGender: " << gender << "\nJob Title: " << jobTitle << "\nSalary: $" << salary << "\nHire Date: ";
	hireDate.print();
	cout << endl;
}

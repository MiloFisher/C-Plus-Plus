#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include<iostream>
#include"date.h"
using namespace std;

class Employee
{
protected:
	string name;
	int id;
	long long phoneNumber;
	int age;
	char gender;
	string jobTitle;
	int salary;
	Date hireDate;
public:
	Employee();
	Employee(string n, int i, long long p, int a, char g, string j, int s, Date h);
	~Employee(){}
	void setName(string x);
	void setID(int x);
	void setPhoneNumber(long long x);
	void setAge(int x);
	void setGender(char x);
	void setJobTitle(string x);
	void setSalary(int x);
	void setHireDate(Date x);
	void printInfo();
};

#endif

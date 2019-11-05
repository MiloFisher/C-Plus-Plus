//=============================
// Programmer: Milo Fisher
// HW03
// Professor Kath
// CS1C TTH 12:30-2:50
//=============================

#include<iostream>
#include"date.h"
#include"employee.h"
#include"programmer.h"
#include"softwareArchitect.h"
using namespace std;

int main()
{
	Employee e1;
	Date hiredOn1(8,31,14);
	Employee e2("Jimmy Fallon",12345,9495551234,40,'M',"Comedian",100000,hiredOn1);
	e1.printInfo();
	e2.printInfo();

	e1.setName("Stephan Colbert");
	e1.setID(12346);
	e1.setPhoneNumber(3105555555);
	e1.setAge(51);
	e1.setGender('M');
	e1.setJobTitle("Comedian");
	e1.setSalary(70123);
	Date hiredOn2(5,8,15);
	e1.setHireDate(hiredOn2);
	e1.printInfo();

	Programmer p1;
	Date hiredOn3(12,24,11);
	Programmer p2("Sam Software",54321,8191234567,21,'M',"Programmer",223000,hiredOn3,5432122,"Joe Boss",4,true,false);
	p1.printInfo();
	p2.printInfo();

	p1.setName("Mary Coder");
	p1.setID(65432);
	p1.setPhoneNumber(3105555555);
	p1.setAge(28);
	p1.setGender('F');
	p1.setJobTitle("Programmer");
	p1.setSalary(770123);
	Date hiredOn4(2,8,10);
	p1.setHireDate(hiredOn4);
	p1.setDepartmentNumber(6543222);
	p1.setSupervisorName("Mary Leader");
	p1.setUsesCPlusPlus(true);
	p1.setUsesJava(true);
	p1.setSalaryPercentIncrease(7);
	p1.printInfo();

	SoftwareArchitect s1;
	Date hiredOn5(12,24,9);
	SoftwareArchitect s2("Alex Arch",88888,8191234444,31,'M',"Architect",323000,hiredOn5,5434222,"Big Boss",5,4);
	s1.printInfo();
	s2.printInfo();

	s1.setName("Sally Designer");
	s1.setID(87878);
	s1.setPhoneNumber(3105558888);
	s1.setAge(38);
	s1.setGender('F');
	s1.setJobTitle("Architect");
	s1.setSalary(870123);
	Date hiredOn6(2,8,3);
	s1.setHireDate(hiredOn6);
	s1.setDepartmentNumber(6543422);
	s1.setSupervisorName("Big Boss");
	s1.setYearsOfExperience(8);
	s1.setSalaryPercentIncrease(11);
	s1.printInfo();
}

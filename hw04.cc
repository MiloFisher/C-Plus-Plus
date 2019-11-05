//=============================
// Programmer: Milo Fisher
// HW04
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
	Employee e;
	Date hiredOn1(12,24,11);
	Programmer p("Sam Software",54321,8191234567,21,'M',"Programmer",223000,hiredOn1,5432122,"Joe Boss",4,true,false);
	Date hiredOn2(12,24,9);
	SoftwareArchitect s("Alex Arch",88888,8191234444,31,'M',"Architect",323000,hiredOn2,5434222,"Big Boss",5,4);

	cin >> e;

	cout << endl << e << endl;
	p.printInfo();
	s.printInfo();

	cout << "Comparing default phone numbers:\n";
	if(comparePhoneNumbers(e,p))
		cout << "Employee and programmer have the same numbers\n";
	else
		cout << "Employee and programmer have different numbers\n";
	if(e == s)
		cout << "Employee and software architect have the same numbers\n";
	else
		cout << "Employee and software architect have different numbers\n";

	cout << "\nComparing phone numbers after setting them all to 100:\n";
	e.setPhoneNumber(100);
	p.setPhoneNumber(100);
	s.setPhoneNumber(100);

	if(comparePhoneNumbers(e,p))
		cout << "Employee and programmer have the same numbers\n";
	else
		cout << "Employee and programmer have different numbers\n";
	if(e == s)
		cout << "Employee and software architect have the same numbers\n";
	else
		cout << "Employee and software architect have different numbers\n";

	cout << endl << "Now Adding to the age of the employee:\n";


	e.addAge(10);
	e.setAge(e + 10);


	cout << e << endl;

	Employee test1 = e++;//post increment assigns, then increments
	test1.setName("Post increment test");
	cout << test1 << endl << e << endl;

	Employee test2 = ++e;//pre increment increments, then assigns
	test2.setName("Pre increment test");

	 cout << test2;// the first two of the last 4 employees will be the same and the last 2 will also be the same
}

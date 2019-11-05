//=============================
// Programmer: Milo Fisher
// HW09
// Professor Kath
// CS1C TTH 12:30-2:50
//=============================

#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;

class Shape
{
public:
	virtual float calcPerimeter() = 0;
	virtual float calcArea() = 0;
};

class Triangle: public Shape
{
private:
	float side1, side2, base, height;
public:
	Triangle(): side1(0), side2(0), base(0), height(0) {}
	Triangle(float s1, float s2, float b, float h): side1(s1), side2(s2), base(b), height(h) {}
	float calcPerimeter(){return side1 + side2 + base;}
	float calcArea(){return (base*height)/2;}
	void printPerimeter(){cout << "Perimeter: " << calcPerimeter() << endl;}
	void printArea(){cout << "Area: " << calcArea() << endl;}
};

class Rectangle: public Shape
{
private:
	float side1, side2;
public:
	Rectangle(): side1(0), side2(0) {}
	Rectangle(float s1, float s2): side1(s1), side2(s2) {}
	float calcPerimeter(){return 2*side1 + 2*side2;}
	float calcArea(){return side1 * side2;}
	void printPerimeter(){cout << "Perimeter: " << calcPerimeter() << endl;}
	void printArea(){cout << "Area: " << calcArea() << endl;}
};

int main()
{
	Triangle t(5,5,3,4);
	cout << "Triangle:\n";
	t.printPerimeter();
	t.printArea();
	Rectangle r(5,7);
	cout << "\nRectangle:\n";
	r.printPerimeter();
	r.printArea();
	return 0;
}

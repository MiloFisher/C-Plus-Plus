//=============================
// Programmer: Milo Fisher
// HW09ec
// Professor Kath
// CS1C TTH 12:30-2:50
//=============================

#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;

const int ROWS = 21;
const int COLS = 21;

class Shape
{
public:
	Shape(int x, int y): x(x), y(y){}
	void print(){cout << "X: " << x << "\nY: " << y << "\n";}
	virtual void move(int a, int b){x = a; y = b;}
	virtual void updateDimensions(int a, int b) = 0;
private:
	int x, y;
};

class Circle: public Shape
{
public:
	Circle(int r): Shape(0,0), r(r){}
	~Circle(){}
	void print(){Shape::print(); cout << "R: " << r << "\n\n";}
	void updateDimensions(int a, int b){r = a;}
private:
	int r;
};

class Rectangle: public Shape
{
public:
	Rectangle(int l, int w): Shape(0,0), l(l), w(w) {}
	~Rectangle(){}
	void print(){Shape::print(); cout << "L: " << l << "\nW: " << w << "\n\n";}
	void updateDimensions(int a, int b){l = a; w = b;}
private:
	int l, w;
};

void drawShape(Shape * pShape, int x, int y, int a, int b)
{
	pShape->updateDimensions(a,b);
	pShape->move(x, y);
}

int main()
{
	Circle *c = new Circle(6);
	c->print();
	c->move(3,3);
	c->updateDimensions(9,0);
	c->print();
	drawShape(c,2,2,3,0);
	c->print();

	Rectangle *r = new Rectangle(4,7);
	r->print();
	r->move(2,2);
	r->updateDimensions(4,5);
	r->print();
	drawShape(r,1,1,2,2);
	r->print();
	return 0;
}

/* 							Question 4:
 * Print() is static binding, UpdateDimensions() is dynamic binding
 * static binding binds during compiling, while dynamic binding binds during runtime
 *
 * Static polymorphism is when the same method is overloaded with different parameters
 * Dynamic polymorphism is the same method overridden in different classes
 */

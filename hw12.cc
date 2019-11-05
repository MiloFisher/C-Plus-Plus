#include<iostream>
#include<string>
#include"queue.h"
#include"linkedqueue.h"
using namespace std;

template <typename T>
void print(queue<T>& q)
{
	queue<T> copy;
	T data;
	while(!q.isEmpty())
	{
		data = q.dequeue();
		copy.enqueue(data);
		cout << data << endl;
	}
	q = copy;
}

template <typename T>
void print(linkedqueue<T>& q)
{
	linkedqueue<T> copy;
	T data;
	while(!q.isEmpty())
	{
		data = q.dequeue();
		copy.enqueue(data);
		cout << data << endl;
	}
	q = copy;
}

int main()
{
	queue<int> intq;
	queue<double> doubq;
	queue<string> strq;

	cout << "Int Queue:\n";
	intq.enqueue(0);
	intq.enqueue(1);
	intq.enqueue(2);
	intq.enqueue(3);
	intq.enqueue(4);
	intq.enqueue(5);
	intq.enqueue(6);

	intq.dequeue();
	intq.dequeue();
	intq.dequeue();
	intq.dequeue();

	intq.enqueue(7);
	intq.enqueue(8);
	intq.enqueue(9);
	intq.enqueue(10);
	intq.enqueue(11);

	intq.dequeue();
	intq.dequeue();
	intq.dequeue();

	print(intq);

	cout << "\nDouble Queue:\n";
	doubq.enqueue(0.1);
	doubq.enqueue(1.1);
	doubq.enqueue(2.1);
	doubq.enqueue(3.1);
	doubq.enqueue(4.1);
	doubq.enqueue(5.1);
	doubq.enqueue(6.1);

	doubq.dequeue();
	doubq.dequeue();
	doubq.dequeue();
	doubq.dequeue();

	doubq.enqueue(7.1);
	doubq.enqueue(8.1);
	doubq.enqueue(9.1);
	doubq.enqueue(10.1);
	doubq.enqueue(11.1);

	doubq.dequeue();
	doubq.dequeue();
	doubq.dequeue();

	print(doubq);

	cout << "\nString Queue:\n";
	strq.enqueue("a");
	strq.enqueue("b");
	strq.enqueue("c");
	strq.enqueue("d");
	strq.enqueue("e");
	strq.enqueue("f");

	strq.dequeue();
	strq.dequeue();
	strq.dequeue();
	strq.dequeue();

	strq.enqueue("g");
	strq.enqueue("h");
	strq.enqueue("i");
	strq.enqueue("j");
	strq.enqueue("k");

	strq.dequeue();
	strq.dequeue();
	strq.dequeue();

	print(strq);

	//************************** EXTRA CREDIT **************************

	linkedqueue<int> intlq;
	linkedqueue<double> doublq;
	linkedqueue<string> strlq;

	cout << "\nInt Linked Queue:\n";
	intlq.enqueue(0);
	intlq.enqueue(1);
	intlq.enqueue(2);
	intlq.enqueue(3);
	intlq.enqueue(4);
	intlq.enqueue(5);
	intlq.enqueue(6);

	intlq.dequeue();
	intlq.dequeue();
	intlq.dequeue();
	intlq.dequeue();

	intlq.enqueue(7);
	intlq.enqueue(8);
	intlq.enqueue(9);
	intlq.enqueue(10);
	intlq.enqueue(11);

	intlq.dequeue();
	intlq.dequeue();
	intlq.dequeue();

	print(intlq);

	cout << "\nDouble Linked Queue:\n";
	doublq.enqueue(0.1);
	doublq.enqueue(1.1);
	doublq.enqueue(2.1);
	doublq.enqueue(3.1);
	doublq.enqueue(4.1);
	doublq.enqueue(5.1);
	doublq.enqueue(6.1);

	doublq.dequeue();
	doublq.dequeue();
	doublq.dequeue();
	doublq.dequeue();

	doublq.enqueue(7.1);
	doublq.enqueue(8.1);
	doublq.enqueue(9.1);
	doublq.enqueue(10.1);
	doublq.enqueue(11.1);

	doublq.dequeue();
	doublq.dequeue();
	doublq.dequeue();

	print(doublq);

	cout << "\nString Linked Queue:\n";
	strlq.enqueue("a");
	strlq.enqueue("b");
	strlq.enqueue("c");
	strlq.enqueue("d");
	strlq.enqueue("e");
	strlq.enqueue("f");

	strlq.dequeue();
	strlq.dequeue();
	strlq.dequeue();
	strlq.dequeue();

	strlq.enqueue("g");
	strlq.enqueue("h");
	strlq.enqueue("i");
	strlq.enqueue("j");
	strlq.enqueue("k");

	strlq.dequeue();
	strlq.dequeue();
	strlq.dequeue();

	print(strlq);
	return 0;
}

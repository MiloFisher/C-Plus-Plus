#ifndef QUEUE_H_
#define QUEUE_H_
#include<iostream>
using namespace std;

template <typename T>
class queue
{
private:
	int s;
	T* item;
	T* head;
	T* tail;
public:
	queue<T>() : s(0), item(new T[s]), head(item), tail(item){}
	void enqueue(T element)
	{
		T* copy = new T[s+1];
		for(int i = 0; i < s; i++)
		{
			copy[i] = item[i];
		}
		copy[s] = element;
		delete[] item;
		item = copy;
		head = item;
		tail = &item[s];
		s++;
	}
	T dequeue()
	{
		if(!isEmpty())
		{
			T value = front();
			T* copy = new T[s-1];
			for(int i = 0; i < s-1; i++)
			{
				copy[i] = item[i+1];
			}
			delete[] item;
			item = copy;
			head = item;
			tail = &item[s];
			s--;
			return value;
		}
		return 0;
	}
	T front()
	{
		return *head;
	}
	int size()
	{
		return s;
	}
	bool isEmpty()
	{
		return s == 0;
	}
	bool isFull()
	{
		return false; //I made my queue dynamic so it should hypothetically never be full
	}
};
#endif

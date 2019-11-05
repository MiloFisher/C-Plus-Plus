#ifndef DATA_H_
#define DATA_H_

template <typename T>
struct data
{
	T item;
	data<T>* next;
};

template <typename T>
class linkedqueue
{
private:
	int s;
	data<T>* head;
	data<T>* tail;
public:
	linkedqueue<T>() : s(0), head(nullptr), tail(nullptr){}
	void enqueue(T item)
	{
		data<T>* it = head;
		data<T>* temp = new data<T>;
		if(head != nullptr)
		{
			while(it->next != nullptr)
			{
				it = it->next;
			}
			it->next = temp;
		}
		else
			head = temp;
		temp->item = item;
		temp->next = nullptr;
		s++;
	};
	T dequeue()
	{
		if(!isEmpty())
		{
			T value = head->item;
			data<T>* temp = head->next;
			delete head;
			head = temp;
			s--;
			return value;
		}
		return 0;
	}
	T front()
	{
		return head->item;
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
		return false;
	}
};
#endif

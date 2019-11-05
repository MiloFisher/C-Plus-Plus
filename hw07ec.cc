//=============================
// Programmer: Milo Fisher
// HW07ec
// Professor Kath
// CS1C TTH 12:30-2:50
//=============================

#include<iostream>
using namespace std;

struct Item
{
	string name;
	int quantity;
	float cost;
};

const int MAX_SIZE = 50;

class ManageInventory
{
public:
	ManageInventory() : size(MAX_SIZE), count(0), p_pInventoryItems (new Item*[size]) { }
	ManageInventory(int size) : size(size), count(0), p_pInventoryItems (new Item*[size]) { }
	~ManageInventory()
	{
		for (int i = 0; i < count; i++)
		{
			delete p_pInventoryItems[i];
		}
		delete[] p_pInventoryItems;
	}
	void addItem(string name, int quantity, float cost)
	{
		p_pInventoryItems[count] = new Item;
		p_pInventoryItems[count]->name = name;
		p_pInventoryItems[count]->quantity = quantity;
		p_pInventoryItems[count]->cost = cost;
		count++;
	}
private:
	int size;
	int count;
	Item ** p_pInventoryItems;
};

int main()
{
	ManageInventory inv;
	inv.addItem("hat",1,20);
	inv.addItem("ball",1,15);
	inv.addItem("sandwich",3,8);
	inv.addItem("jacket",1,45);
	inv.addItem("water bottle",2,3);
	return 0;
}

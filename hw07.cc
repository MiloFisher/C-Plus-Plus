//=============================
// Programmer: Milo Fisher
// HW07
// Professor Kath
// CS1C TTH 12:30-2:50
//=============================

#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
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
	ManageInventory() : size(MAX_SIZE), count(0), p_pInventoryItems (new Item*[size]), transactions(0), transactionHistory (new Item*[100]) { }
	ManageInventory(int size) : size(size), count(0), p_pInventoryItems (new Item*[size]), transactions(0), transactionHistory (new Item*[100]) { }
	~ManageInventory()
	{
		for (int i = 0; i < count; i++)
		{
			delete p_pInventoryItems[i];
		}
		delete[] p_pInventoryItems;

		for (int i = 0; i < transactions; i++)
		{
			delete transactionHistory[i];
		}
		delete[] transactionHistory;
	}
	void addItem(string name, int quantity, float cost)
	{
		p_pInventoryItems[count] = new Item;
		p_pInventoryItems[count]->name = name;
		p_pInventoryItems[count]->quantity = quantity;
		p_pInventoryItems[count]->cost = cost;
		count++;
	}
	Item buyItem(int id, int amount)
	{
		Item a = *p_pInventoryItems[id];
		p_pInventoryItems[id]->quantity -= amount;
		a.quantity = amount;

		addTransaction(a);
		return a;
	}
	void addTransaction(Item a)
	{
		transactionHistory[transactions] = new Item;
		transactionHistory[transactions]->name = a.name;
		transactionHistory[transactions]->quantity = a.quantity;
		transactionHistory[transactions]->cost = a.cost;
		transactions++;
	}
	void print()
	{
		cout << "============ Inventory: =============\n";
		for(int i = 0; i < count; i++)
		{
			if(p_pInventoryItems[i]->name.length() < 15)
				cout << p_pInventoryItems[i]->name << "\t\t| ";
			else
				cout << p_pInventoryItems[i]->name << "\t| ";
			cout << p_pInventoryItems[i]->quantity << " | " << p_pInventoryItems[i]->cost << endl;
		}
		cout << endl;
	}
	void copy(ManageInventory & m)
	{
		size = m.size;
		p_pInventoryItems = new Item*[size];
		transactionHistory = new Item*[100];

		for(int i = 0; i < size; i++)
		{
			p_pInventoryItems[i] = NULL;
		}
		for(int i = 0; i < m.count; i++)
		{
			addItem(m.p_pInventoryItems[i]->name,m.p_pInventoryItems[i]->quantity,m.p_pInventoryItems[i]->cost);
		}

		for(int i = 0; i < 100; i++)
		{
			transactionHistory[i] = NULL;
		}
		for(int i = 0; i < m.transactions; i++)
		{
			addTransaction(*m.transactionHistory[i]);
		}
	}
	void showTransactionHistory()
	{
		cout << "Transaction History:\n";
		for(int i = 0; i < transactions; i++)
		{
			cout << "Transaction " << i + 1 << ": " << transactionHistory[i]->quantity << " x " << transactionHistory[i]->name << " for $" << transactionHistory[i]->cost*transactionHistory[i]->quantity << "\n";
		}
		cout << endl;
	}
private:
	int size;
	int count;
	Item ** p_pInventoryItems;
	int transactions;
	Item ** transactionHistory;
};

class Customer
{
private:
	string name;
	vector<Item> items;
public:
	Customer(string name) : name(name){}
	~Customer(){}
	void purchaseItem(Item i)
	{
		items.push_back(i);
	}
	void displayTotal()
	{
		cout << "   -------- " << name << "'s Receipt --------\n";
		float total = 0;
		for(int i = 0; i < items.size(); i++)
		{
			total += items[i].cost * items[i].quantity;
			cout << " - " << items[i].name;
			if(items[i].name.length() < 21)
				cout << "\t";
			if(items[i].name.length() < 14)
				cout << "\t";
			cout <<" x " << items[i].quantity << " = $" << items[i].cost * items[i].quantity << endl;
		}
		cout << "\n - Total:\t\t       $" << total << "\n";
		cout << fixed << setprecision(2) << " - Total w/ tax:\t       $" << total * 1.0825 << "\n\n"; //732.279
	}
};

namespace inventory
{
	ManageInventory *inv = new ManageInventory();
}

int main()
{
	ManageInventory *inv = new ManageInventory();
	inv->addItem("Nike basketball shoes", 22, 145.99);
	inv->addItem("Under Armour T-shirt", 33, 29.99);
	inv->addItem("Brooks running shoes", 11, 111.44);
	inv->addItem("Asics running shoes", 20, 165.88);
	inv->addItem("Nike shorts", 77, 45.77);
	inv->print();

	Customer *mark = new Customer("Mark");
	mark->purchaseItem(inv->buyItem(0,2));
	mark->purchaseItem(inv->buyItem(1,3));
	mark->purchaseItem(inv->buyItem(4,4));
	mark->purchaseItem(inv->buyItem(2,1));
	mark->displayTotal();

	inv->print();

	inv->showTransactionHistory();

	cout << "Copied the inventory to a new object:\n\n";
	inventory::inv->copy(*inv);
	inventory::inv->print();
	inventory::inv->showTransactionHistory();
	return 0;
}

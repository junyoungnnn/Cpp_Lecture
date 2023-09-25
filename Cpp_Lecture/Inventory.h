#pragma once
#include <iostream>
#include <string>
#include "Item.h"

using namespace std;

class Inventory
{
private:
	int x = 5;
	int y = 3;
	int invenSize = x * y;
	Item* items;
	int itemCount;
public:
	Inventory(int x = 5, int y = 3);
	void ShowInventory();
	void AddItem(Item & item);
	void DiscardItem();
};


#pragma once
#include <iostream>
#include <string>
#include "Item.h"
#include "InputKey.h"

using namespace std;

class Inventory
{
private:
	int x = 5;
	int y = 3;
	int invenSize = x * y;
	int lineX;
	int selectIndex;

	Item* items;
public:
	Inventory(int x = 5, int y = 3);
	void ShowInventory();
	void AddItem(); 
	void SelectNum(InputKey inputKey);
	void ItemInfo();
	int GetIndex();
};


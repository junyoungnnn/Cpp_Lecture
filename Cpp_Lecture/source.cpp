#include <iostream>
#include "Inventory.h"
#include "InputKey.h"

using namespace std;

int main()
{
	Inventory inventory;
	InputKey inputkey;
	//Item item;
	//inventory.ShowInventory();

	inventory.AddItem();
	inventory.AddItem();
	inventory.ShowInventory();
	
	while ( true )
	{
		inputkey.Move();
	}

	return 0;
}
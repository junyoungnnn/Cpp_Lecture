#include "Inventory.h"

Inventory::Inventory(int x, int y)
{
	items = new Item[x * y];
	this->x = x;
	this->y = y;
	this->invenSize = x * y;
	for ( int i = 0;i < invenSize; i++ )
	{
		items[i].SetCheck( false );
	}
}

void Inventory::ShowInventory()
{
	for ( int i = 0; i < invenSize;i++ )
	{
		if ( i != 0 && i % x == 0 )
		{
			cout << endl;
		}
		if ( items[i].GetCheck() == false )
		{
			cout << "□";
		}
		else
		{
			cout << "■";
		}
		
	}
}

void Inventory::AddItem(Item & item)
{
	items[itemCount].SetCheck( true );
	itemCount++;

}

void Inventory::DiscardItem()
{

}

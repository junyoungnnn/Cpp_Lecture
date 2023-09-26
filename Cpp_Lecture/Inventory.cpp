#include "Inventory.h"

Inventory::Inventory(int x, int y)
{
	selectIndex = 0;
	lineX = x;

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
		else if( items[i].GetCheck() == true )
		{
			cout << "■";
		}
		
	}
}

void Inventory::AddItem()
{
	/*items[itemCount].SetCheck( true );
	itemCount++;*/
	for ( int i = 0; i < invenSize; i++ )
	{
		if ( items[i].GetCheck() == false )
		{
			items[i].SetCheck( true );
			break;
		}
		if ( i == invenSize - 1 )
		{
			if ( items[invenSize - 1].GetCheck() == true )
			{
				cout << "인벤토리가 가득 찼습니다." << endl;
			}
		}
	}

}

void Inventory::DiscardItem()
{

}

void Inventory::SelectNum()
{
	if ( y == 0 )
	{
		cout << InputKey::GetX;
	}
	else if ( y == 1 )
	{
		cout << InputKey::GetX + 5;
	}
	//cout << "(x,y) 값: " << "(" << x << "," << y << ")" << endl;
}

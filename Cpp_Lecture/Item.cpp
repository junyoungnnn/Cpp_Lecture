#include "Item.h"

Item::Item( const char* name, int price )
{
	this->name = name;
	this->price = price;
}

void Item::SetCheck( bool check )
{
	this->check = check;
}

bool Item::GetCheck()
{
	return check;
}

void Item::ShowInfo()
{

}
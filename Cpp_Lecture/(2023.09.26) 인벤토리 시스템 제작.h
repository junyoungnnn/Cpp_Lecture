#pragma once
#include <iostream>
#include "Inventory.h"
#include "InputKey.h"

using namespace std;

void GotoXY( int x, int y )
{
	// x, y 좌표 설정
	COORD position = { x, y };

	// 커서 이동
	SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), position );
}

int main()
{
	Inventory inventory;
	InputKey inputkey;
	//inventory.ShowInventory();

	//inventory.AddItem(sword);
	inventory.AddItem();


	while ( true )
	{
		inventory.ShowInventory();

		inputkey.Move();
		inventory.SelectNum( inputkey );


		GotoXY( 0, 10 );
		inventory.ItemInfo();

		Sleep( 100 );
		system( "cls" );
	}

	return 0;
}
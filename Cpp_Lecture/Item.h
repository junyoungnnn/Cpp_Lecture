#pragma once
#include <iostream>
#include <string>
using namespace std;

class Item
{
private:
	const char* name;
	int price;
	bool check;
public:
	Item( const char* name = NULL, int price = 0);

	void ShowInfo();
	void SetCheck(bool check);
	bool GetCheck();
};


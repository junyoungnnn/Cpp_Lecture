#include "Marine.h"

Marine::Marine()
{
	SetHP(maxHP);
}

void Marine::Skill()
{
	cout << "스팀팩" << endl;
}

void Marine::SetHP(int value)
{
	if (value >= 0 && value <= 100)
	{
		health = value;
	}
	else
	{
		cout << "잘못된 값이 들어왔습니다." << endl;
	}
}

int Marine::GetHP()
{
	return health;
}

void Marine::SelfDemage()
{
	health -= 15;
}

void Marine::Recovery()
{
	SetHP(maxHP);
}



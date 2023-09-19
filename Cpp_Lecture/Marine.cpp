#include "Marine.h"

Marine::Marine()
{
	maxHP = 100;
	SetHP(maxHP);
}

void Marine::Skill()
{
	cout << "스팀팩" << endl;
}

void Marine::SetHP(int value)
{
	if (value >= 0 && value <= maxHP)
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

void Marine::RecoveryHP()
{
	SetHP(maxHP);
}



#include "Ghost.h"

Ghost::Ghost()
{
	maxHP = 75;
	SetHP(maxHP);
}

void Ghost::Skill()
{
}

void Ghost::SetHP(int value)
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

int Ghost::GetHP()
{
	return health;
}

void Ghost::SelfDemage()
{
	health -= 15;
}

void Ghost::RecoveryHP()
{
	SetHP(maxHP);
}

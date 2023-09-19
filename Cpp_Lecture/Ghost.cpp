#include "Ghost.h"

Ghost::Ghost()
{
	SetHP(maxHP);
}

void Ghost::Skill()
{
}

void Ghost::SetHP(int value)
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

int Ghost::GetHP()
{
	return health;
}

void Ghost::SelfDemage()
{
	health -= 15;
}

void Ghost::Recovery()
{
	SetHP(maxHP);
}

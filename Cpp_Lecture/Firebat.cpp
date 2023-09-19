#include "Firebat.h"

Firebat::Firebat()
{
	maxHP = 50;
	SetHP(maxHP);
}

void Firebat::Skill()
{
}

void Firebat::SetHP(int value)
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

int Firebat::GetHP()
{
	return health;
}

void Firebat::SelfDemage()
{
	health -= 15;
}

void Firebat::RecoveryHP()
{
	SetHP(maxHP);
}

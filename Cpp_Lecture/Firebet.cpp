#include "Firebet.h"

Firebet::Firebet()
{
	SetHP(maxHP);
}

void Firebet::Skill()
{
}

void Firebet::SetHP(int value)
{
	if (value >= 0 && value <= 100)
	{
		health = value;
	}
	else
	{
		cout << "�߸��� ���� ���Խ��ϴ�." << endl;
	}
}

int Firebet::GetHP()
{
	return health;
}

void Firebet::SelfDemage()
{
	health -= 15;
}

void Firebet::Recovery()
{
	SetHP(maxHP);
}

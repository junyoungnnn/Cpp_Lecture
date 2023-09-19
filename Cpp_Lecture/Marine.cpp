#include "Marine.h"

Marine::Marine()
{
	SetHP(maxHP);
}

void Marine::Skill()
{
	cout << "������" << endl;
}

void Marine::SetHP(int value)
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



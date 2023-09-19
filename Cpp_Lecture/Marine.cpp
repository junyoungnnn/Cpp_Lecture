#include "Marine.h"

Marine::Marine()
{
	maxHP = 100;
	SetHP(maxHP);
}

void Marine::Skill()
{
	cout << "������" << endl;
}

void Marine::SetHP(int value)
{
	if (value >= 0 && value <= maxHP)
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

void Marine::RecoveryHP()
{
	SetHP(maxHP);
}



#pragma once
#include <iostream>
#include "Marine.h"
#include "Ghost.h"
#include "Firebat.h"

using namespace std;

#pragma region �Լ��� �����ε�
// ���� �̸��� �Լ��� �Ű� ������ �ڷ����� �Ű�������
// ���� �����Ͽ� ���� ���� ������ �� �ִ� ����Դϴ�.
void Calculator(char x, char y)
{
	cout << "x + y : " << x + y << endl;
}

void Calculator(int x, int y)
{
	cout << "x + y : " << x + y << endl;
}

void Calculator(float x, float y)
{
	cout << "x + y : " << x + y << endl;
}

// �Լ��� �����ε��� ��� �Լ��� �Ű� ������
// �����ϴ� �μ��� ���¸� ���� ȣ���ϹǷ�, ��ȯ������
// �Լ��� �����ε��� ������ �� �����ϴ�.
//int Calculator(float x, float y)
//{
//
//}
#pragma endregion

void Recovery(Unit* unit)
{
	unit->RecoveryHP();
}

int main()
{
#pragma region �Լ��� �����ε�
	// Calculator('A', 'B');
	// Calculator(10, 20);
	// Calculator(5.75f, 4.95f); // f�� �Ⱥ��̸� double�� �ν���.
#pragma endregion

#pragma region ���� �����Լ�
	// �Լ��� ���� �� �� ������, �ش� Ŭ�������� ������ �� �� ����,
	// ��� ���� ���� Ŭ�������� �ݵ�� �����Ǹ� �ؾ��ϴ� ��� �Լ� �Դϴ�.

	//Unit * unitPtr = new Marine;

	//unitPtr->SetHP(100);
	// unitPtr->Skill();
	//cout << unitPtr->GetHP() << endl;

	Unit* unit[3] = { new Marine, new Ghost, new Firebat };

	for (int i = 0; i < 3; i++)
	{
		cout << unit[i]->GetHP() << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		unit[i]->SelfDemage();
		cout << unit[i]->GetHP() << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		Recovery(unit[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		cout << unit[i]->GetHP() << endl;
	}

#pragma endregion

	return 0;
}
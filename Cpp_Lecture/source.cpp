#include <iostream>
#include "Marine.h"
#include "Ghost.h"
#include "Firebet.h"

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
	unit->SetHP(100);
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

	Marine* marine = new Marine;
	cout << "������ ü��: " << marine->GetHP() << endl;
	marine->SelfDemage();
	cout << "������ ü��: " << marine->GetHP() << endl;
	marine->Recovery();
	cout << "������ ü��: " << marine->GetHP() << endl;

	Ghost* ghost = new Ghost;
	cout << "��Ʈ�� ü��: " << ghost->GetHP() << endl;
	ghost->SelfDemage();
	cout << "��Ʈ�� ü��: " << ghost->GetHP() << endl;
	ghost->Recovery();
	cout << "��Ʈ�� ü��: " << ghost->GetHP() << endl;

	Firebet* firebet = new Firebet;
	cout << "���̾���� ü��: " << firebet->GetHP() << endl;
	firebet->SelfDemage();
	cout << "���̾���� ü��: " << firebet->GetHP() << endl;
	firebet->Recovery();
	cout << "���̾���� ü��: " << firebet->GetHP() << endl;

#pragma endregion

	return 0;
}
#pragma once
#include <iostream>
#include "Camera.h"
#include "Vulture.h"
#include "SiegeTank.h"
#include "Goliath.h"

using namespace std;

#pragma region ������
// �������� ���� �ٸ� ��ü�� ������ �����
// ���� �ٸ� ������� ó���� �� �ִ� �۾��Դϴ�.

// �������� ������ ������ �Լ��� �Ӽ��� �����Ǵ�
// ���� ���ε��� ���� �ʰ�, ���� �ð��� �Լ���
// �Ӽ��� ������ �� �ִ� ���� ���ε��� �����ϰ� �մϴ�.

#pragma endregion


int main()
{
#pragma region �������̵�
	// Mechanic mechanic;
	// mechanic.Move();
	// 
	// Vulture vulture;
	// vulture.Move();
#pragma endregion

#pragma region ���� �Լ�
	// ����ϴ� Ŭ���� ������ ���� ������ �Լ��� ������
	// �� �� �ִ� �Լ��Դϴ�.

	// Mechanic* mechanic1 = new Vulture;

	 // cout << "Mechanic�� ũ��: " << sizeof(Mechanic) << endl;
	 // cout << "Vulture�� ũ��: " << sizeof(Vulture) << endl;

	 // ���� �Լ��� �� �� �̻��� ���� �Լ��� �����ϴ� Ŭ������
	 // ���� �� ��ü �ּҿ� ���� �Լ� ���̺��� �߰��մϴ�.

	// mechanic1->Move();
	// mechanic1->Attack();

	// ���ÿ��� mechanic1 ������ Mechanic, Vulture�� ����������
	// mechanic1�� ������ �ּҴ� Mechanic�� ������ ��.


	// ���� �Լ� ���� �ð��� ���� Ŭ������ ���� ������
	// ���� Ŭ������ �����ǵ� �Լ��� ȣ���� �� ������,
	// ���� �����ڴ� ������ �����ؾ� �մϴ�.
#pragma endregion

#pragma region ��Ÿũ����Ʈ ���� ����

	/*int number;
	int count = 0;

	while (count < 5)
	{
		Mechanic* mechanic = nullptr;
		cin >> number;

		switch (number)
		{
		case 1:
			mechanic = new Vulture;
			break;
		case 2:
			mechanic = new SiegeTank;
			break;
		case 3:
			mechanic = new Goliath;
			break;
		default:
			cout << "�ٽ� �Է��� �ּ���" << endl;
			continue;
		}
		count++;
		mechanic->Attack();
	}*/

	// ���� �Լ��� ��� ���� �Լ� ���̺��� ����Ͽ�
	// ȣ��Ǵ� �Լ��� ���� �ð��� �����ϸ�, ��������
	// ����� �Լ��� ���� �Լ��� ������ �� �����ϴ�.
#pragma endregion

#pragma region ���� �Ҹ���
	 // ��ü�� �Ҹ�� �� ���� �����ϰ� �ִ� ��ü�� �������
	 // ��� ȣ��Ǵ� �Ҹ��� �Դϴ�.

	Mechanic* unit1 = new Vulture;
	Mechanic* unit2 = new SiegeTank;
	Mechanic* unit3 = new Goliath;

	delete unit1;
	delete unit2;
	delete unit3;

	// ���� �Ҹ��ڴ� ��ӵ� ��ü�� ������ �� ���� Ŭ������ �Ҹ��ڰ�
	// ���� ����ǰ� ���� Ŭ������ �Ҹ��ڰ� ����Ǿ�� �ϱ� ������
	// ���� �ð��� �޸𸮿� �Ҵ�� ��ü�� Ȯ���ϰ� ���ʴ�� �Ҹ���Ѿ� �մϴ�.
#pragma endregion


	return 0;
}
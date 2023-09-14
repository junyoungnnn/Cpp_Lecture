#include <iostream>
#include "Camera.h"
#include "Vulture.h"

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

	Mechanic* mechanic1 = new Vulture;

	cout << "Mechanic�� ũ��: " << sizeof(Mechanic) << endl;
	cout << "Vulture�� ũ��: " << sizeof(Vulture) << endl;

	mechanic1->Move();
	mechanic1->Attack();
	// ���ÿ��� mechanic1 ������ Mechanic, Vulture�� ����������
	// mechanic1�� ������ �ּҴ� Mechanic�� ������ ��.
	

	// ���� �Լ� ���� �ð��� ���� Ŭ������ ���� ������
	// ���� Ŭ������ �����ǵ� �Լ��� ȣ���� �� ������,
	// ���� �����ڴ� ������ �����ؾ� �մϴ�.
#pragma endregion

	return 0;
}
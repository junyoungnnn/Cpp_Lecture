#pragma once
#include "Mechanic.h"

class Vulture : public Mechanic
{
public:
	Vulture();

#pragma region �Լ��� �������̵�
	// �������̵�� ���� �����
	
	// ���� Ŭ������ �ִ� �Լ��� ���� Ŭ�������� �������Ͽ�
	// ����ϴ� ����Դϴ�.

	void Move();
	virtual void Attack() override;
	// �Լ��� �������̵�� ��� ���迡���� �̷������,
	// ���� Ŭ�������� �Լ��� ������ �� �� ���� Ŭ������
	// �Լ� ���¿� ��ġ�ؾ� �մϴ�.
#pragma endregion

};


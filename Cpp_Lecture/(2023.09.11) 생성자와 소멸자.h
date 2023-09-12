#pragma once
#include <iostream>

using namespace std;

#pragma region Ŭ����
// ����� ���� ������ �������� �Ӽ��� �Լ��� ���ԵǾ�
// ������, Ŭ������ ���� ��ü�� �����Ͽ� �����ϰ� ����� ��
// �ִ� ����ü�Դϴ�.

class GameObject
{
	// ���� ������
	// Ŭ���� ������ ���ԵǾ� �ִ� �Ӽ��� ���� ������
	// �����ϴ� �������Դϴ�.

	// public
	// Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ���� �׸��� Ŭ���� �ܺο���
	// ������ ����ϴ� �������Դϴ�.

	// protected
	// Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ����������,
	// ������ ����ϴ� �������Դϴ�.

	// �⺻ ���� ������ (private)
	// Ŭ���� ���ο����� ������ ����ϴ� �������Դϴ�.

public:
	float x;

	void SendMesssage()
	{
		cout << "�޼���" << endl;
	}
protected:
	double y;
	// �е������� double�� �Ʒ��� �����°��� ����.
private:
	float z;


};
#pragma endregion

#pragma region �����ڿ� �Ҹ���
// <������>
// Ŭ������ �ν��Ͻ��� �����Ǵ� �������� �ڵ�����
// ȣ��Ǵ� Ư���� ��� �Լ��Դϴ�.

class Monster
{
private:
	int health;

public:
	Monster()
	{
		cout << "Monster ����" << endl;
	}

	// �������� ��� ��ü�� ������ �� �� �� ����
	// ȣ��Ǹ�, �����ڴ� ��ȯ���� �������� �ʱ� ������
	// �����ڰ� ȣ��Ǳ� ������ ��ü�� ���� �޸𸮴� �Ҵ����� �ʽ��ϴ�.

	// <�Ҹ���>
	// ��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� Ŭ������ ��� �Լ��Դϴ�.
	~Monster()
	{
		cout << "Monster �Ҹ�" << endl;
	}

	// �Ҹ��ڴ� ��ü�� �޸𸮿��� ������ �� �� �� ����
	// ȣ��Ǹ�, �Ҹ��ڿ��� �Ű������� �����Ͽ� ����� �� �����ϴ�.
};
#pragma endregion


int main()
{
#pragma region Ŭ����

	//	GameObject gameObject1;
	//	GameObject gameObject2;
	//	
	//	// �Լ��� �ּҴ� �ڵ� ������ ����Ǳ� ����.
	//	cout << sizeof(GameObject) << endl;
	//	/*
	//	CODE(�Լ��� �ּ�)
	//	DATA(.rodata)
	//		(init data)
	//	BSS
	//	HEAP
	//	STACK -> gameObject1
	//		  -> gameObject2
	//	*/
	//	
	//	// �Լ��� �Ű�������  �ڽ��� �ּҰ� ��(this)
	//	gameObject1.SendMesssage();
	//	gameObject2.SendMesssage();
	//	
	//	gameObject1.x = 100;
	//	cout << "gameObject1.x: " << gameObject1.x << endl;
#pragma endregion

#pragma region �����ڿ� �Ҹ���

	Monster monster;

	// �����ʹ� �׳� �ּҸ� ������ �� �ִ� ������ ����.
	// Monster *ptr�� �׳� 8byte �޸𸮸� ����ڴ�. ������ ȣ�� �ȵ�.
	Monster* ptr = new Monster;

	delete ptr;

	// ����� �ڵ��� ��Ȱ�뼺
	// �θ�� �ڽ��� �ڵ带 ��������
	// �ڽ��� �θ��� �ڵ带 ��밡��.
#pragma endregion

	return 0;
}
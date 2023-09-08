#include <iostream>

using namespace std;

int data = 25;

namespace A
{
	void Attack()
	{
		std::cout << "A ������ Attack()" << std::endl;
	}
}

namespace B
{
	void Attack()
	{
		std::cout << "B ������ Attack()" << std::endl;
	}
}

void Damage(int hp = 100)
{
	hp -= 25;
	cout << "hp�� ��: " << hp << endl;
}

void Move(int x, int y, int z = 10)
{
	cout << "x�� ��: " << x << endl;
	cout << "y�� ��: " << y << endl;
	cout << "z�� ��: " << z << endl;
}

using namespace A;
// ���ӽ����̽� ���� �Ʒ��� ����ؾ���.

int main()
{
#pragma region ���� ���� ������
	// ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ�
	// ����ϴ� �������Դϴ�.

	// int data = 100;
	// 
	// std::cout << "���� ������ data�� �� : "<< data << std::endl;
	// std::cout << "���� ������ data�� �� : "<< ::data << std::endl;

	// ���� ���� �����ڴ� ���� ������ ���� �̸��� ����������
	// ����Ǿ��� �� ���� ����� ������ ����� ������ �̸���
	// ����ϴ� ���� ��Ģ�� �����ϱ� ������ ���� ������ ȣ����� �ʽ��ϴ�.

#pragma endregion

#pragma region �̸� ����
	// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� �����Դϴ�.

	// A::Attack();
	// B::Attack();
	// Attack();

#pragma endregion

#pragma region  �⺻ �Ű�����
	// �Լ��� �Ű� ������ ���� ���޵��� �ʾ��� ��
	// �⺻ ������ �����Ǵ� �Ű� �����Դϴ�.

	// int hp = 100;
	// Damage();
	// Move(5, 6);
	// Move(10, 20, 30);
#pragma endregion

#pragma region �ּ� �����

	int x, y;
	cin >> x >> y;

	int count = 0;
	for (int i = 2; i <= min(x, y); i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			count = i;
		}
	}
	cout <<  x * y / count << endl;

#pragma endregion


	return 0;
}
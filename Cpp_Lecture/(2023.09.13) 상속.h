#pragma once
#include <iostream>
#include "Camera.h"

using namespace std;

#pragma region ���
// ���� Ŭ������ �Ӽ��� ���� Ŭ������ ����� �� �ֵ���
// �������ִ� ����Դϴ�. 

class Vehicle
{
protected:
	float speed;
	// ���������� ��𼭵� ������ �����ѵ�
	// ���������� ���������� ������ ������ ����.
	// ���������� �ٱ��κп��� �ʱ�ȭ�� ���־����.
	static int killcount;

public:
	Vehicle()
	{
		cout << "Vehicle Object ����" << endl;
	}

	void Movement()
	{
		cout << "�̵�" << endl;
	}

	static int GetCount()
	{
		return killcount;
	}

	~Vehicle()
	{
		cout << "Vehicle Object ����" << endl;
	}

};

// �������� �ʱ�ȭ
int Vehicle::killcount = 5;

class Car : public Vehicle
{
private:
	int carID;

public:
	Car()
	{
		carID = 1;
		speed = 100;
		cout << "Car Object ����" << endl;
	}
	~Car()
	{
		cout << "Car Object ����" << endl;
		cout << "killcount: " << killcount++ << endl;
	}

};

// Ŭ������ ��� ���迡�� ���� Ŭ������ ���� Ŭ������
// �Ӽ��� ����� �� ������ , ���� Ŭ������ ���� Ŭ������
// �޸𸮸� ������ ���·� �޸��� ũ�Ⱑ �����˴ϴ�.
#pragma endregion


int main()
{
#pragma region ���

	/*Vehicle vehicle;

	Car car1;
	Car car2;
	Car car3;

	cout << car1.GetCount() << endl;

	cout << "vehicle�� ũ��: " << sizeof(vehicle) << endl;
	cout << "car�� ũ��: " << sizeof(car1) << endl;*/
#pragma endregion

#pragma region Ŭ���� ���Ұ� ����

	/*Camera camera;
	*
	camera.Information();*/

#pragma endregion

	return 0;
}
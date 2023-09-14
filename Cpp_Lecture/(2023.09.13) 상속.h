#pragma once
#include <iostream>
#include "Camera.h"

using namespace std;

#pragma region 상속
// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록
// 설정해주는 기능입니다. 

class Vehicle
{
protected:
	float speed;
	// 전역변수는 어디서든 접근이 가능한데
	// 정적변수는 지역변수의 성질을 가지고 있음.
	// 정적변수는 바깥부분에서 초기화를 해주어야함.
	static int killcount;

public:
	Vehicle()
	{
		cout << "Vehicle Object 생성" << endl;
	}

	void Movement()
	{
		cout << "이동" << endl;
	}

	static int GetCount()
	{
		return killcount;
	}

	~Vehicle()
	{
		cout << "Vehicle Object 해제" << endl;
	}

};

// 정적변수 초기화
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
		cout << "Car Object 생성" << endl;
	}
	~Car()
	{
		cout << "Car Object 해제" << endl;
		cout << "killcount: " << killcount++ << endl;
	}

};

// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의
// 속성을 사용할 수 없으며 , 하위 클래스는 상위 클래스의
// 메모리를 포함한 상태로 메모리의 크기가 결정됩니다.
#pragma endregion


int main()
{
#pragma region 상속

	/*Vehicle vehicle;

	Car car1;
	Car car2;
	Car car3;

	cout << car1.GetCount() << endl;

	cout << "vehicle의 크기: " << sizeof(vehicle) << endl;
	cout << "car의 크기: " << sizeof(car1) << endl;*/
#pragma endregion

#pragma region 클래스 분할과 구현

	/*Camera camera;
	*
	camera.Information();*/

#pragma endregion

	return 0;
}
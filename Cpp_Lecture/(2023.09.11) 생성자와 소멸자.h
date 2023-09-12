#pragma once
#include <iostream>

using namespace std;

#pragma region 클래스
// 사용자 정의 데이터 유형으로 속성과 함수가 포함되어
// 있으며, 클래스를 통해 객체를 생성하여 접근하고 사용할 수
// 있는 집합체입니다.

class GameObject
{
	// 접근 자종자
	// 클래스 내부의 포함되어 있는 속성에 접근 범위를
	// 제한하는 지정자입니다.

	// public
	// 클래스 내부와 자기가 상속하고 있는 클래스 그리고 클래스 외부에서
	// 접근을 허용하는 지정자입니다.

	// protected
	// 클래스 내부와 자기가 상속하고 있는 클래스까지만,
	// 접근을 허용하는 지정자입니다.

	// 기본 접근 지정자 (private)
	// 클레스 내부에서만 접근을 허용하는 지정자입니다.

public:
	float x;

	void SendMesssage()
	{
		cout << "메세지" << endl;
	}
protected:
	double y;
	// 패딩때문에 double을 아래로 내리는것이 좋음.
private:
	float z;


};
#pragma endregion

#pragma region 생성자와 소멸자
// <생성자>
// 클래스의 인스턴스가 생성되는 시점에서 자동으로
// 호출되는 특수한 멤버 함수입니다.

class Monster
{
private:
	int health;

public:
	Monster()
	{
		cout << "Monster 생성" << endl;
	}

	// 생성자의 경우 객체가 생성될 때 단 한 번만
	// 호출되며, 생성자는 반환형이 존재하지 않기 때문에
	// 생성자가 호출되기 전에는 객체에 대한 메모리는 할당하지 않습니다.

	// <소멸자>
	// 객체가 소멸될 때 자동으로 실행되는 클래스의 멤버 함수입니다.
	~Monster()
	{
		cout << "Monster 소멸" << endl;
	}

	// 소멸자는 객체가 메모리에소 해제될 떄 단 한 번만
	// 호출되며, 소멸자에는 매개변수를 생성하여 사용할 수 없습니다.
};
#pragma endregion


int main()
{
#pragma region 클래스

	//	GameObject gameObject1;
	//	GameObject gameObject2;
	//	
	//	// 함수의 주소는 코드 영역에 저장되기 때문.
	//	cout << sizeof(GameObject) << endl;
	//	/*
	//	CODE(함수의 주소)
	//	DATA(.rodata)
	//		(init data)
	//	BSS
	//	HEAP
	//	STACK -> gameObject1
	//		  -> gameObject2
	//	*/
	//	
	//	// 함수의 매개변수에  자신의 주소가 들어감(this)
	//	gameObject1.SendMesssage();
	//	gameObject2.SendMesssage();
	//	
	//	gameObject1.x = 100;
	//	cout << "gameObject1.x: " << gameObject1.x << endl;
#pragma endregion

#pragma region 생성자와 소멸자

	Monster monster;

	// 포인터는 그냥 주소를 저장할 수 있는 변수일 뿐임.
	// Monster *ptr은 그냥 8byte 메모리를 만들겠다. 생성자 호출 안됨.
	Monster* ptr = new Monster;

	delete ptr;

	// 상속은 코드의 재활용성
	// 부모는 자식의 코드를 못쓰지만
	// 자식은 부모의 코드를 사용가능.
#pragma endregion

	return 0;
}
#pragma once
#include <iostream>
#include "Marine.h"
#include "Ghost.h"
#include "Firebat.h"

using namespace std;

#pragma region 함수의 오버로딩
// 같은 이름의 함수를 매개 변수의 자료형과 매개변수의
// 수로 구분하여 여러 개를 선언할 수 있는 기능입니다.
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

// 함수의 오버로딩의 경우 함수의 매개 변수에
// 전달하는 인수의 형태를 보고 호출하므로, 반환형으로
// 함수의 오버로딩을 생성할 수 없습니다.
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
#pragma region 함수의 오버로딩
	// Calculator('A', 'B');
	// Calculator(10, 20);
	// Calculator(5.75f, 4.95f); // f를 안붙이면 double로 인식함.
#pragma endregion

#pragma region 순수 가상함수
	// 함수를 선언만 할 수 있으며, 해당 클래스에서 구현을 할 수 없고,
	// 상속 받은 하위 클래스에서 반드시 재정의를 해야하는 멤버 함수 입니다.

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
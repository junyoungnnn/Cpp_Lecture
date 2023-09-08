#include <iostream>

using namespace std;

int data = 25;

namespace A
{
	void Attack()
	{
		std::cout << "A 개발자 Attack()" << std::endl;
	}
}

namespace B
{
	void Attack()
	{
		std::cout << "B 개발자 Attack()" << std::endl;
	}
}

void Damage(int hp = 100)
{
	hp -= 25;
	cout << "hp의 값: " << hp << endl;
}

void Move(int x, int y, int z = 10)
{
	cout << "x의 값: " << x << endl;
	cout << "y의 값: " << y << endl;
	cout << "z의 값: " << z << endl;
}

using namespace A;
// 네임스페이스 선언 아래에 사용해야함.

int main()
{
#pragma region 범위 지정 연산자
	// 여러 범위에서 사용되는 식별자를 구분하는데
	// 사용하는 연산자입니다.

	// int data = 100;
	// 
	// std::cout << "지역 변수의 data의 값 : "<< data << std::endl;
	// std::cout << "전역 변수의 data의 값 : "<< ::data << std::endl;

	// 범위 지정 연산자는 전역 변수와 같은 이름의 지역변수가
	// 선언되었을 때 가장 가까운 범위에 선언된 변수의 이름을
	// 사용하는 범위 규칙이 존재하기 때문에 전역 변수가 호출되지 않습니다.

#pragma endregion

#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역입니다.

	// A::Attack();
	// B::Attack();
	// Attack();

#pragma endregion

#pragma region  기본 매개변수
	// 함수의 매개 변수에 값이 전달되지 않았을 때
	// 기본 값으로 설정되는 매개 변수입니다.

	// int hp = 100;
	// Damage();
	// Move(5, 6);
	// Move(10, 20, 30);
#pragma endregion

#pragma region 최소 공배수

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
#include <iostream>
#include "Computer.h"

using namespace std;

int main()
{
#pragma region 다중 상속
	// 하나의 하위 클래스가 여러개의 상위 클래스를 상속받는 것입니다.

	Computer computer;
	computer.use();

#pragma endregion

	return 0;
}
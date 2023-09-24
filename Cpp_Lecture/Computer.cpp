#include "Computer.h"

Computer::Computer()
{
	std::cout << "Create Computer" << std::endl;
}

void Computer::use()
{
	// 다중 상속은 여래 개의 상위 클래스에 중복되는 속성이
	// 존재할 수 있기 때문에 범위 지정 연산자를 통해 상위 클래스의
	// 이름을 선언하고 속성을 사용해야 합니다.

	Mouse::Input();

	OnDrag();
	OnButton();
}

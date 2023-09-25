#include <iostream>
#include "Computer.h"
#include "Player.h"
#include "Bank.h"

using namespace std;

int main()
{
#pragma region 다중 상속
	// 하나의 하위 클래스가 여러개의 상위 클래스를 상속받는 것입니다.

	/*Computer computer;
	computer.use();*/

#pragma endregion

#pragma region Friend
	// Friend로 선언된 클래스의 private 및 protected 멤버에
	// 접근할 수 있도록 설정해주는 기능입니다.

	Bank bank;
	Player player;
	player.ShowInfo();
	bank.Withdrawal( player, 3000 );
	bank.ShowInfo();

#pragma endregion

	return 0;
}
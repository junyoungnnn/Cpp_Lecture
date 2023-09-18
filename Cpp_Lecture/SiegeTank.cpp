#include "SiegeTank.h"

SiegeTank::SiegeTank()
{
	health = 150;
	attack = 30;
	cout << "시즈 탱크 생성" << endl;
}

void SiegeTank::Attack()
{
	cout << "시즈 탱크 공격" << endl;
}

SiegeTank::~SiegeTank()
{
	cout << "시즈 탱크 삭제" << endl;
}

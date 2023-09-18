#include "SiegeTank.h"

SiegeTank::SiegeTank()
{
	health = 150;
	attack = 30;
	cout << "시즈 탱크 생성" << endl;
}

SiegeTank::~SiegeTank()
{
}

void SiegeTank::Attack()
{
	cout << "시즈 탱크 공격" << endl;
}

#include "Goliath.h"

Goliath::Goliath()
{
	health = 125;
	attack = 12;
	cout << "榜府狙 积己" << endl;
}

Goliath::~Goliath()
{
}

void Goliath::Attack()
{
	cout << "榜府狙 傍拜" << endl;
}

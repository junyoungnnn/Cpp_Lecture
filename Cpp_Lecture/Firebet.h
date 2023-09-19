#pragma once
#include "Unit.h"
class Firebet : public Unit
{
private:
	int maxHP = 50;
public:
	Firebet();
	void Skill() override;
	void SetHP(int value) override;
	int GetHP() override;
	void SelfDemage() override;
	void Recovery() override;
};


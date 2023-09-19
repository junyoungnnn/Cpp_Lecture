#pragma once
#include "Unit.h"

class Marine :public Unit
{
private:
	int maxHP = 100;

public:
	Marine();
	void Skill() override;
	void SetHP(int value) override;
	int GetHP() override;
	void SelfDemage() override;
	void Recovery() override;
};


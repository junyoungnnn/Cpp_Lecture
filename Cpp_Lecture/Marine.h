#pragma once
#include "Unit.h"

class Marine :public Unit
{
private:
public:
	Marine();
	void Skill() override;
	void SetHP(int value) override;
	int GetHP() override;
	void SelfDemage() override;
	void RecoveryHP() override;
};


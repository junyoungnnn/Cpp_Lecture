#pragma once
#include "Unit.h"
class Firebat : public Unit
{
private:
public:
	Firebat();
	void Skill() override;
	void SetHP(int value) override;
	int GetHP() override;
	void SelfDemage() override;
	void RecoveryHP() override;
};


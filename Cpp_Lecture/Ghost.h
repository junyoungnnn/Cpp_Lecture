#pragma once
#include "Unit.h"
class Ghost : public Unit
{
private:
	int maxHP = 75;
public:
	Ghost();
	void Skill() override;
	void SetHP(int value) override;
	int GetHP() override;
	void SelfDemage() override;
	void Recovery() override;
};


#pragma once
#include "Component.h"

class Keyboard : public Component
{
public:
	Keyboard();

	void Input();
	void OnButton();
};


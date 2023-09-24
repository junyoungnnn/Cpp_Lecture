#pragma once
#include "Component.h"

class Mouse : public Component
{
public:
	Mouse();

	void Input();
	void OnDrag();

};


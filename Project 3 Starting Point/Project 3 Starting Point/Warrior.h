#pragma once
#include <string>
#include "Mook.h"
class Warrior: public Mook
{
public:
	Warrior(std::string name);
	~Warrior();
	std::string Attack();
};


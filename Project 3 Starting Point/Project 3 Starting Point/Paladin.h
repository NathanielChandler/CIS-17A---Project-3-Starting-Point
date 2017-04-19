#pragma once
#include <string>
#include "Mook.h"
class Paladin: public Mook
{
public:
	Paladin(std::string name);
	~Paladin();
	std::string Attack();
};


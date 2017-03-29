#pragma once
#include <string>
#include "Mook.h"
class Paladin: public Mook
{
public:
	Paladin(std::string name);
	~Paladin();
	std::string Attack() { return GetName() + " swings a giant maul at his foes!"; }
};


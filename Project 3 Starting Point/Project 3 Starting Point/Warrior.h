#pragma once
#include <string>
#include "Mook.h"
class Warrior: public Mook
{
public:
	Warrior(std::string name);
	~Warrior();
	std::string Attack() { return GetName() + " shouts 'DO YOU LIKE MY SWORD SWORD SWORD MY DIAMOND SWORD!"; }
};


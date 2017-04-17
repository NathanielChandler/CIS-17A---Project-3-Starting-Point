#pragma once
#include <string>
#include "Mook.h"
class Mage: public Mook
{
private:
	//_attack = " casts magic missle at the darkness!";
public:
	Mage(std::string name);
	~Mage();
	std::string Attack();
};


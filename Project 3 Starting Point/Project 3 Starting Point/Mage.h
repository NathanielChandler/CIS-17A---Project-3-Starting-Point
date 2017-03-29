#pragma once
#include <string>
#include "Mook.h"
class Mage: public Mook
{
public:
	Mage(std::string name);
	~Mage();
	std::string Attack() { return GetName() + " casts magic missle at the darkness!"; }	
};


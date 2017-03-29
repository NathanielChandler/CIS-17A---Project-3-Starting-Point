#pragma once
#include <string>
#include "Mook.h"
class Ranger: public Mook
{
public:
	Ranger(std::string name);
	~Ranger();
	std::string Attack() { return GetName() + " shoots arrows at his enemies!  PEW PEW PEW"; }
};


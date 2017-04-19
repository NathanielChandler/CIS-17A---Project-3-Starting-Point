#include "Ranger.h"



Ranger::Ranger(std::string name) : Mook(name)
{
	_tag = "ranger";
	_attack = " shoots arrows at his enemies!  PEW PEW PEW";
}


Ranger::~Ranger()
{
}

std::string Ranger::Attack()
{
	return GetName() + _attack;
}

#include "Paladin.h"



Paladin::Paladin(std::string name) : Mook(name)
{
	_tag = "paladin";
	_attack = " swings a giant maul at his foes!";
}


Paladin::~Paladin()
{
}

std::string Paladin::Attack()
{
	return GetName() + _attack;
}

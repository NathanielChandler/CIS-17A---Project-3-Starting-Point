#include "Warrior.h"


Warrior::Warrior(std::string name) : Mook(name)
{
	_tag = "warrior";
	_attack = " shouts \"Fus RO-DAH\"";
}


Warrior::~Warrior()
{
}

std::string Warrior::Attack()
{
	return GetName() + _attack;
}

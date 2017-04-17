#include "Mook.h"



Mook::Mook(std::string name) : _name(name)
{
}


Mook::~Mook()
{
}

std::string Mook::Attack()
{
	return "attacks";
}

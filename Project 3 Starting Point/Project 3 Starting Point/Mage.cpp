#include "Mage.h"

Mage::Mage(std::string name) : Mook(name)
{
	_tag = "mage";
	_attack = " casts magic missle at the darkness!";
}


Mage::~Mage()
{
}

std::string Mage::Attack()
{
	 return GetName() + _attack; 
}

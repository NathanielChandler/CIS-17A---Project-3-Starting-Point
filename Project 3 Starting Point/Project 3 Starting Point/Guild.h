#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Mage.h"
#include "Paladin.h"
#include "Ranger.h"
#include "Warrior.h"

class Guild
{
private:
	std::vector<std::shared_ptr<Mook>> _mooks;
	
	std::string _name;
	int _gold = 0;
public:
	Guild(std::string name);
	~Guild();

	std::string GetName() const { return _name; }
	void AddMook(std::shared_ptr<Mook> bob);

	std::vector<std::shared_ptr<Mook>> SearchMooks(std::string tag);

	std::string GetInfo();

	std::string Attack(std::string tag);
	std::string AttackWithMages();
	std::string AttackWithPaladins();
	std::string AttackWithRangers();
	std::string AttackWithWarriors();
	std::string AttackWithAllAdventurers();
};


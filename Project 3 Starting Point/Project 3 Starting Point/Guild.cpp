#include "Guild.h"

Guild::Guild(std::string name) : _name(name)
{
}

Guild::~Guild()
{
}


void Guild::AddMook(std::shared_ptr<Mook>bob)
{
	_mooks.push_back(bob);
}

std::vector<std::shared_ptr<Mook>> Guild::SearchMooks(std::string tag)
{
	auto request = std::vector<std::shared_ptr<Mook>>();
	if (tag == "all")
	{
		return _mooks;
	}
	else {
		for (auto mooks : _mooks)
		{
			if (mooks->GetTag() == tag)
			{
				request.push_back(mooks);
			}
		}
	}
	return request;
}

std::string Guild::GetInfo()
{
	std::string types[] = { "mage","ranger","warrior","paladin" };
	std::string output = "Your guild has: \n";	
	
	output += SearchMooks(types[0]).size() > 0 ? std::to_string(SearchMooks(types[0]).size()) + " mages\n" : "No mages!\n";
	output += SearchMooks(types[1]).size()	> 0 ? std::to_string(SearchMooks(types[1]).size()) + " rangers\n" : "No rangers!\n";
	output += SearchMooks(types[2]).size()	> 0 ? std::to_string(SearchMooks(types[2]).size()) + " warriors\n" : "No warriors!\n";
	output += SearchMooks(types[3]).size()	> 0 ? std::to_string(SearchMooks(types[3]).size()) + " paladins\n" : "No paladins!\n";
	
	return output;
}

std::string Guild::Attack(std::string tag)
{
	std::string output;
	output += "You command ";
	output += tag == "all" ? "everyone to attack!\n" : tag + "s to attack!\n";
	
	std::vector<std::shared_ptr<Mook>> attackers = SearchMooks(tag);
	for (auto mook : attackers)
	{
		output += mook->Attack() + "\n";
	}

	return output;
}

std::string Guild::AttackWithMages()
{
	std::string output = "You command your mages to attack! \n";
	/*
	if (_mages.size() > 0) {
		for (auto mage : _mages) {
			output += mage->Attack() + "\n";
		}
	}*/
	return output;
}

std::string Guild::AttackWithPaladins()
{
	std::string output = "You command your paladins to attack! \n";
	/*
	if (_paladins.size() > 0) {
		for (auto paladin : _paladins) {
			output += paladin->Attack() + "\n";
		}
	}*/
	return output;
}

std::string Guild::AttackWithRangers()
{
	std::string output = "You command your rangers to attack! \n";
	/*
	if (_rangers.size() > 0) {
		for (auto ranger : _rangers) {
			output += ranger->Attack() + "\n";
		}
	}*/
	return output;
}

std::string Guild::AttackWithWarriors()
{
	std::string output = "You command your warriors to attack! \n";
	/*
	if (_warriors.size() > 0) {
		for (auto warrior : _warriors) {
			output += warrior->Attack() + "\n";
		}
	}*/
	return output;
}

std::string Guild::AttackWithAllAdventurers()
{
	std::string output = "You command everyone to attack! \n";
	output += AttackWithMages();
	output += AttackWithPaladins();
	output += AttackWithRangers();
	output += AttackWithWarriors();
	return output;
}

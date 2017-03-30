#include "Guild.h"

Guild::Guild(std::string name) : _name(name)
{
}

Guild::~Guild()
{
}


void Guild::AddMook(Mook *bob)
{
	auto mook = std::make_shared<Mook>(*bob);
	_mooks.push_back(mook);
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
	/*
	output += SearchMooks("mage").size() > 0 ? std::to_string(_mages.size()) + " mages\n" : "No mages!\n";
	output += _rangers.size()	> 0 ? std::to_string(_rangers.size()) + " rangers\n" : "No rangers!\n";
	output += _warriors.size()	> 0 ? std::to_string(_warriors.size()) + " warriors\n" : "No warriors!\n";
	output += _paladins.size()	> 0 ? std::to_string(_paladins.size()) + " paladins\n" : "No paladins!\n";
	*/
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

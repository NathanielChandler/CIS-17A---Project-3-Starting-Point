#pragma once
#include <string>
class Mook
{
private:
	std::string _name;
protected:
	std::string _tag;
	std::string _attack;
public:
	Mook(std::string name);
	~Mook();
	std::string GetTag() const { return _tag; };
	std::string GetName() const { return _name; };
	std::string virtual Attack();
	
};


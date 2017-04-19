#include <iostream>
#include <string>
#include <memory>
#include "Guild.h"
#include "Mage.h"
using namespace std;

void DisplayGuildInfo(const shared_ptr<Guild> guild);
void AddAdventurer(const shared_ptr<Guild> guild);
void Attack(const shared_ptr<Guild> guild);

int main() 
{
	cout << "Welcome to the adventure guild simulator." << endl << "Enter a name for your guild: ";
	string name;
	getline(cin, name);
	auto guild = make_shared<Guild>(name);

	int choice = -1;
	while (choice != 0) 
	{
		system("cls");
		cout << "Now Managing " << guild->GetName() << endl << "****************************" << endl;
		cout << "1) Display Guild Information" << endl;
		cout << "2) Add An Adventurer" << endl;
		cout << "3) Attack!" << endl;
		cin >> choice;

		switch (choice) 
		{
		case 1: DisplayGuildInfo(guild); break;
		case 2: AddAdventurer(guild); break;
		case 3: Attack(guild); break;
		default: return 0; break;
		}
	}
	return 0;
}

void DisplayGuildInfo(const shared_ptr<Guild> guild)
{
	system("cls");
	cout << guild->GetInfo();
	system("pause");
}

void AddAdventurer(const shared_ptr<Guild> guild) 
{
	system("cls");

	cout << "Enter a name for your adventurer: ";
	string name;
	cin >> name;

	system("cls");

	cout << "What type of adventurer would you like to add?" << endl;
	cout << "1) Mage" << endl;
	cout << "2) Ranger" << endl;
	cout << "3) Paladin" << endl;
	cout << "4) Warrior" << endl;

	int choice = -1;
	cin >> choice;
	auto bob = make_shared<Mook>("NULL");
	switch (choice)
	{
	case 1: guild->AddMook(make_shared<Mage>(name)); break;
	case 2: guild->AddMook(make_shared<Ranger>(name)); break;
	case 3: guild->AddMook(make_shared<Paladin>(name)); break;
	case 4: guild->AddMook(make_shared<Warrior>(name)); break;
	default: cout << "Invalid choice!"; break;
	}
	system("pause");
}

void Attack(const shared_ptr<Guild> guild)
{
	system("cls");

	cout << "1) Attack with mages" << endl;
	cout << "2) Attack with rangers" << endl;
	cout << "3) Attack with warriors" << endl;
	cout << "4) Attack with paladins" << endl;
	cout << "5) Attack with everything!" << endl;

	int choice = -1;
	cin >> choice;

	switch (choice)
	{
	case 1: cout << guild->Attack("mage") << endl; break;
	case 2: cout << guild->Attack("ranger") << endl; break;
	case 3: cout << guild->Attack("warrior") << endl; break;
	case 4: cout << guild->Attack("paladin") << endl; break;
	case 5: cout << guild->Attack("all") << endl; break;
	default: cout << "You run away like a coward" << endl; break;
	}
	system("pause");
	
}
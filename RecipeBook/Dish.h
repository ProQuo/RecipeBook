#pragma once

#include <string>

using namespace std;

class Dish
{
public:
	Dish(string name, string ingredients[] );
	~Dish();

	// Setters
	void setName(string name);


	// Getters
	string getName() { return _name; }

protected:
	string _name;
};


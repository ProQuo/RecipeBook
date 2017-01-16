/*This class will store individual ingredients for meals and the shopping cart. Each ingredient will have a quantity and unit assigned to it depending meal.*/

#pragma once

class Ingredient
{
public:
	Ingredient(std::string name) { _name = name; }
	~Ingredient();

	//Getters
	std::string getName() { return _name; }

private:
	std::string _name;
	//std::string _unit; add units once you get simple meals working
	//int _quantity; add once meals are working
};
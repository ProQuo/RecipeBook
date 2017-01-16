/*This class will hold all the components of meals such as the name, ingredients and tags to sort by*/

#pragma once

#include "Ingredient.h"

class Dish
{
public:
	Dish();
	Dish(std::string name) { _name = name; }
	Dish(std::string name, std::vector<Ingredient> item);
	Dish(std::string name, std::vector<Ingredient> item, std::vector<std::string> tags);

	~Dish();

	void addIngredients(std::vector<Ingredient>);
	void addIngredients(Ingredient item);

	bool checkForMultiple(Ingredient& item);


	// Setters
	void setName(std::string name) { _name = name; }
	void addTag(std::string tag) { _tags.push_back(tag); }



	// Getters
	std::string getName() { return _name; }
	std::vector<std::string> getTags() { return _tags; }
	std::vector<Ingredient> getIngredients() { return _ingredients; }

protected:
	std::string _name;
	std::vector<Ingredient> _ingredients;
	std::vector<std::string> _tags;
};


#include "Dish.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//Constructers

Dish::Dish() {

}

Dish::Dish(std::string name, std::vector<Ingredient> item) {

	_name = name;

	for (auto element : item) {
		_ingredients.push_back(element);
	}
}

Dish::Dish(std::string name, std::vector<Ingredient> item, vector<string> tags) {

	_name = name;

	for (auto element : item) {
		_ingredients.push_back(element);
	}

	for (auto element : tags) {
		_tags.push_back(element);
	}



}

Dish::~Dish()
{
}

/* Will add ingredients that are not already in the dish*/
void Dish::addIngredients(std::vector<Ingredient> items) {

	for (auto element : items) {
		
		if (!checkForMultiple(element)) {
			_ingredients.push_back(element);
		}
	}
}

/* Will add an ingredients that is not already in the dish*/
void Dish::addIngredients(Ingredient item) {

	if (!checkForMultiple(item)) {
		_ingredients.push_back(item);
	}
}

/* Will check the ingredient vector to ensure an ingredient isn't added twice, will return true if the ingredient already exists*/
bool Dish::checkForMultiple(Ingredient& item) {

	 return find(_ingredients.begin(), _ingredients.end(), item) != _ingredients.end(); // returns true if present, false otherwise

}

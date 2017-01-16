/*This class will handle any meals/ingredients added as a shopping list. Ideally these will be able to be removed or added at will with their own quanitites.*/

#pragma once

#include "Dish.h"

class ShoppingList
{
public:
	ShoppingList();
	~ShoppingList();

	//Setters
	void addDish(Dish meal) { _meals.push_back(meal); }
	void addItem(Ingredient item) { _cart.push_back(item); }

	//Getters

private:
	int _quantity;
	std::vector<Dish> _meals;
	std::vector<Ingredient> _cart;

};


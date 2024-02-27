// libaries used in this header file
#pragma once
#include <iostream>
#include <string>
#include "automobile.h"
using namespace std;

// creates the class
class cars : public automobile
{
	// private user can not change
private:
	string condition;

	// public the user can change
public:
	cars();
	cars(string Name, int Model, int Year, int Mileage, string condition);
	void display();
	//polymorphism display
	void display(bool newName);

};

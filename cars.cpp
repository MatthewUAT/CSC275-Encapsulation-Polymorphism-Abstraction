// libaries and files used in this .cpp 
#include "automobile.h"
#include "cars.h"
#include <iostream>
#include <string>
using namespace std;

cars::cars() {}
// sets the info to be entered 
cars::cars(string Name, int Model, int Year, int Mileage, string con) : automobile(Name, Model, Year, Mileage)
{
	condition = con;
	//encapsulation means rules 
	if (Mileage < 500)
	{
		cout << "Mileage is to low for Used condition" << endl;
		condition = "New";
	}
	else
	{
		condition = con;
	}
}
// sets up the display for this .cpp 
void cars::display()
{
	automobile::display();
	cout << "Condition of vehicle = " << condition << endl;
}
//polymorphism display
void cars::display(bool newName)
{
	// sets newName to name + model
	if (newName)
	{
		cout << name << " " << model << endl;
	}
	else
	{
		cout << "Error";
	}
}
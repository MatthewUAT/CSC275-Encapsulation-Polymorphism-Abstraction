// libaries used in this header file
#pragma once
#include <string>
using namespace std;
// creates the class
class automobile
{
	// private can not changed outside the inherited classes
	// protected the inherited classes can mod 
protected:
	string name;
	int model;
	int year;
	int mileage;
	
	// public the user can change
public:
	automobile();
	automobile(string Name, int Model, int Year, int Mileage);
	// sets class to abstract
	virtual void display();

};
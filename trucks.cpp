// libaries and files used in this .cpp 
#include "automobile.h"
#include "trucks.h"
#include <iostream>
#include <string>
using namespace std;

trucks::trucks() {}
// sets the info to be entered 
trucks::trucks(string Name, int Model, int Year, int Mileage, string con) : automobile(Name, Model, Year, Mileage)
{
	condition = con;
	//encapsulation means rules 
	if (Mileage > 500)
	{
		cout << "Mileage is to high for new condition" << endl;
		condition = "Used";
	}
	else
	{
		condition = con;
	}
}
// sets up the display for this .cpp 
void trucks::display()
{
	automobile::display();
	cout << "Condition of vehicle = " << condition << endl;
}
//polymorphism display
void trucks::display(bool anTique)
{
	if (anTique)
	{
		year <= 1994;
		cout << "Vehicle is an Antique" << endl;
	}
	else
	{
		cout << "Year is " << year << endl;
	}
}
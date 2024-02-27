
// libaries and files used in this .cpp 
#include <iostream>
#include <string>
#include "automobile.h"
using namespace std;

automobile::automobile() {}
// sets the info to be entered 
automobile::automobile(string Name, int Model, int Year, int Mileage)
{
	name = Name;
	model = Model;
	year = Year;
	mileage = Mileage;
	
}
// sets up the display for this .cpp 
void automobile::display()
{
	cout << "Name = " << name << endl;
	cout << "Model = " << model << endl;
	cout << "Year = " << year << endl;
	cout << "Mileage = " << mileage << endl;
}
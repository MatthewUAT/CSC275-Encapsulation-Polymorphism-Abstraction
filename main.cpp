// OOP using encapsulation, Abstract, Polymorphism By: Matthew Sender

//libaries and files used 
#include <iostream>
#include <string>
#include "automobile.h"
#include "trucks.h"
#include "cars.h"
// used so I don't have to type std::
using namespace std;

// main function
int main()
{
	// calls the class automobile
	
	automobile a1("Ford", 150, 2010, 95000);
	a1.display();
	cout << endl;
	// calls the class trucks 
	trucks c1("Chevy", 2500, 1990, 1000, "New");
	c1.display();
	// polymorphism display that checks year against my parameters I set
	c1.display(true);
	c1.display(false);
	cout << endl;
	// calls the class cars
	cars p1("Porsche", 911, 2005, 189, "Used");
	p1.display();
	p1.display(true);
	p1.display(false);
	cout << endl;

	// pauses the system the user user has to press a key to continue
	system("pause");
	return 0;
}
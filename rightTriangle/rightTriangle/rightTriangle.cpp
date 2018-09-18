#include <iostream>
#include <string>
#include "triangles.h"
using namespace std;

int right()
{
	int chooseFunction;
	int choosePythagorean;

	cout << "what will you be solving for? \n 1 = perimeter \n 2 = missing side ";
	cin >> chooseFunction;

	if (chooseFunction == 1)
	{
		perimeter();
	}
	else if (chooseFunction == 2)
		cout << "are we solving for the hypotenuse? \n 1 = yes \n 2 = no " << endl;
	cin >> choosePythagorean; 
	if (choosePythagorean == 1)
	{
		pythagoreanC();
	}
	else if (choosePythagorean == 2)
	{
		pythagoreanAB();
	}

	return 0;
}
#include <iostream>
#include <string>
#include "triangles.h"
using namespace std;

int isoceles()
{
	int chooseFunction;

	cout << "what will you be solving for? \n 1 = perimeter \n 2 = missing side ";
	cin >> chooseFunction;

	if (chooseFunction == 1)
	{
		perimeterIso();
	}
	else if (chooseFunction == 2)
	{
		pythagoreanIso();
	}
	return 0;
}
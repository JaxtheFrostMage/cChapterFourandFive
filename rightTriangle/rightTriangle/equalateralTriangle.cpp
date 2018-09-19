#include <iostream>
#include <string>
#include "triangles.h"
using namespace std;

int equalateral()
{
	int chooseFunction;

	cout << "what will you be solving for? \n 1 = perimeter \n 2 = missing side ";
	cin >> chooseFunction;

	if (chooseFunction == 1)
	{
		perimeterEqu();
	}
	else if (chooseFunction == 2)
	{
		idiot();
	}

	return 0;
}
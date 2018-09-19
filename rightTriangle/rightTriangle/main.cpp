//Trinagle clacluator
//Author: Evan J. Raker
//date: 9/12/2018
#include <iostream>
#include <string>
#include "triangles.h"
using namespace std;


int main()
{
	double chooseTriangle;

	cout << "welcome to the triangle calculator." << endl;
	cout << "what type of triangle are you solving for?\n 1 = right \n 2 = isoceles \n 3 = equilateral \n 4 = exit" << endl;
	cin >> chooseTriangle;

	do {
		if (chooseTriangle == 1)
		{
			right();
		}
		else if (chooseTriangle == 2)
		{
			isoceles();
		}
		else if (chooseTriangle == 3)
		{
			equalateral();
		}
		else if (chooseTriangle == 4)
		{
			cout << "The calc boy can weight" << endl;
		}
		else
		{
			cout << "that is not valid...";
		}

	} while (chooseTriangle != 4);

	system("pause");
	return 0;
}


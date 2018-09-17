//Trinagle clacluator
//Author: Evan J. Raker
//date: 9/12/2018
#include <iostream>
#include <string>
#include "triangles.h"
using namespace std;


int main()
{
	int chooseTriangle = 4;
	double sidea;
	double sideb;
	double sidec;

	cout << "welcome to the triangle calculator." << endl;
	cout << "what type of ntriangle are you solving for?\n 2 = right \n isoceles \n 3 = equilateral \n 4 = exit";
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

	} while (chooseTriangle != 4);

	system("pause");
	return 0;
}
// pow(pow(c, 2) - pow(b -2), 0.5)
//include <math.h>

//Trinagle clacluator
//Author: Evan J. Raker
//date: 9/12/2018
#include <iostream>
#include <string>
#include "triangles.h"
using namespace std;

int rightTriangle()
{

}

int rightTriangleCalculator()
{

}

int main()
{
	int chooseTriangle = 4;
	
	cout << "Welcome to the Triangle calculator." << endl;
	cout << "what type of ntriangle are you solving for?\n 2 = Right \n isoceles \n 3 = Equilateral \n 4 = Exit";
	cin >> chooseTriangle;

	do {
		if (chooseTrinagle == 1)
		{
			rightTriangle();
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
			cout << "The calc boy can weight" endl;
		}

	} while (chooseTriangle != 4);

	system("pause");
	return 0;
}
// pow(pow(c, 2) - pow(b -2), 0.5)
//include <math.h>

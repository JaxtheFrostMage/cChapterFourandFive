#include <iostream>
#include <string>
#include <math.h>
#include "triangles.h"
using namespace std;

int perimeter()
{
	double sideA;
	double sideB;
	double sideC;

	cout << "what is the measure of side A? ";
	cin >> sideA;
	cout << "what is the measure of side B? ";
	cin >> sideB;
	cout << "what is the measure of side C? ";
	cin >> sideC;

	double perimeterTotal = sideA + sideB + sideC;
	cout << "your perimeter is " << perimeterTotal << endl;

	return perimeterTotal;
}

int pythagoreanAB()
{
	double sideA = 0;
	double sideC = 0;

	cout << "what is the measure of the hypotenuse? ";
	cin >> sideC;
	cout << "what is the measure of the other known side? ";
	cin >> sideA;
	double sideB = sqrt(pow(sideC, 2) - pow(sideA , 2) );

	cout << "your missing side is " << sideB << endl;
	return sideB;
}

int pythagoreanC()
{
	double sideA;
	double sideB;

	cout << "what is the measure of side A? ";
	cin >> sideA;
	cout << "what is the measure of side B? ";
	cin >> sideB;

	double cSquared = sideA * sideA + sideB + sideB;
	double sideC = pow(pow(sideA, 2) + pow(sideB , 2), 0.5);

	cout << "your missinbg side is " << sideC << endl;
	return sideC;
}
// pow(pow(c, 2) - pow(b -2), 0.5)
//include <math.h>
#include <iostream>
#include <string>
#include <math.h>
#include "triangles.h"
using namespace std;

double perimeter()
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

double pythagoreanAB()
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

double pythagoreanC()
{
	double sideA;
	double sideB;

	cout << "what is the measure of side A? ";
	cin >> sideA;
	cout << "what is the measure of side B? ";
	cin >> sideB;

	double sideC = pow(pow(sideA, 2) + pow(sideB , 2), 0.5);

	cout << "your missinbg side is " << sideC << endl;
	return sideC;
}

double idiot()
{
	double sideA;
	cout << "what is the measure of your sides? " << endl;
	cin >> sideA;
	cout << "you're an idiot, the side is " << sideA;
	return 0;
}
double perimeterEqu()
{
	double sideA;
	cout << "what is the measure of your sides? ";
	cin >> sideA;
	double perimeterEqual = sideA * 3;

	cout << "your perimeter is " << perimeterEqual << endl;
	return perimeterEqual;
}
double pythagoreanIso()
		{
			cout << "can not find missing base, other missing sides will be the same. side A = side B. " << endl;
			return 0;
		}
		double perimeterIso()
		{
			double sideAB;
			double base;

			cout << "what is the measure of your matching sides? ";
			cin >> sideAB;
			cout << "what is the base? ";
			cin >> base;
			double perimeterIsoceles = base + (sideAB * 2);
			cout << "your perimeter is " << perimeterIsoceles << endl;
			return perimeterIsoceles;
		}

// pow(pow(c, 2) - pow(b -2), 0.5)
//include <math.h>
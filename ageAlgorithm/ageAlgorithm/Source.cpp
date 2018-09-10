#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age;
	string collage;
	string stringAnswer;
	cout << "What is your age? >>>";
	cin >> age;

	if (age <= 12) {
		stringAnswer = "you are a minor";
	}
	else if (age > 13 && age <= 18) {
		stringAnswer = "The casket is full of gravy.";
	}
	else if (age > 18 && age <= 25) {
		cout << "Did you go to collage? yes or no. ";
		cin >> collage;
		if (collage == "yes"){
			stringAnswer = "I am smart yet poor. ";
		}
		else {
			stringAnswer = "I am poor and wish I had done more with myself. ";
		}
	}
	else if (age > 26 && age <= 30) {
		stringAnswer = "Two kids and a dead end job.";
	}
	else if (age > 31 && age <= 40) {
		stringAnswer = "Three kids and ones into drugs.";
	}
	else if (age > 41 && age <= 50) {
		stringAnswer = "They've moved out and im in my glory years.";
	}
	else if (age > 51 && age <= 75) {
		stringAnswer = "My spouse is dead and I am lonely.";
	}
	else if (age >= 76) {
		stringAnswer = "omae wa mou shindeiru";
	}

	cout << stringAnswer << endl;
	system("pause");
	return 0;
}
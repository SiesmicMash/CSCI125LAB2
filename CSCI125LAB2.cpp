/*
* This is a program that takes in the weight of a person and calculates the basal metabolic rate of a user gives thier weight in pounds
* 
* Account for the calories burned through physical activity
* 
*/

#include <iostream>
#include <cmath>



double basalMetabolicRate(int weight);
double caloriesForPhysExercise(int minutes, int intensity, int weight);
void input();
int validUserWeight(int weight);
int validMinutes(int minutes);
int validIntensity(int intensity);


int main() {
	input();
}

int validUserWeight(int weight) {
	if (weight >= 0) {
		return weight;
	}
	else {
		std::cout << "PLease input a valid weight in pounds: "<< std::endl;
	}
}
int validMinutes(int minutes) {
	if (minutes >= 0) {
		return minutes;
	}
	else {
		std::cout << "Please input a valid number of minutes: " << std::endl;
	}
}

int validIntensity(int intensity) {
	if ((intensity == 17 || intensity == 10) || (intensity == 8 || intensity == 1)) {
		return intensity;
	}
	else {
		std::cout << "Please input a valid intensity (17, 10, 8, or 1): "<<std::endl;
	}
}

double basalMetabolicRate(int weight) {
	return (70 * pow((weight / 2.2), 0.756)); 
}

double caloriesForPhysExercise(int minutes, int intensity, int weight) {
	return ((0.0385 * intensity) * (weight * minutes)); 
}

void input() {
	bool loop = true;
	int userInput, userWeight, minutes, intensity;


	while (loop) {
		std::cout << "Welcome to the calorie per serving calculator! "<<std::endl
			<< " 1. To calculate the required calories per serving, we will first need to calculate the basal metabolic rate" <<std::endl
			<< " 2. We will also need to calculate the amount of calories burned during a physical activity" <<std::endl
			<< " 3. We will combine the 2 to produce the total calories per serving"<<std::endl
			<< " 4. Exit" <<std::endl;

		switch (userInput) {
		case 1:
			std::cout << "Please enter your weight in pounds: " << std::endl;
			std::cin >> userWeight;
			int validWeight = validUserWeight(userWeight);
			double basalMR = basalMetabolicRate(validWeight);
			std::cout << "The calories used by your body for the basal metabolic rate is, " << basalMR << std::endl;
		case 2:
			std:
		}

	}
}
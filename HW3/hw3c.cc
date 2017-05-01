/*
HW3c - RobotLocationEstimator

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangiarella and John Martin.
*/

#include <iostream>
#include <cmath>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;

int main() {
	float theta, distance;
	double x = 0, y = 0, pi = 3.14159265359;

	while (true) {
		cin >> theta >> distance;
		if (theta < 0 || distance < 0) {
			return 0;
		}
		else {
			theta *= pi/180;
			x += distance * cos(theta - pi/2);
			y += distance * sin(pi/2 - theta);
			cout << "Location: x = " << x << ", y = " << y << endl;
		}
	}
	
	return 0;
}
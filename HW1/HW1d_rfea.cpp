/*
HW1d - sum reciprocals

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangi and John Martin.
*/

#include <iostream>
using namespace std;

int main() {
	float sum1f = 0;
	float sum2f = 0;

	double sum1d = 0;
	double sum2d = 0;

	for (float i = 1; i <= 100; i++) {
		sum1f += 1 / i;
	}

	for (float i = 100; i > 0; i--) {
		sum2f += 1 / i;
	}

	for (double i = 1; i <= 100; i++) {
		sum1d += 1 / i;
	}

	for (double i = 100; i > 0; i--) {
		sum2d += 1 / i;
	}

	cout << "Sum1 float = " << sum1f << endl;
	cout << "Sum2 float = " << sum2f << endl;
	cout << "Difference: Sum1 - Sum2 = " << sum1f - sum2f << endl;
	cout << "Sum1 double = " << sum1d << endl;
	cout << "Sum2 double = " << sum2d << endl;
	cout << "Difference: Sum1 - Sum2 = " << sum1d - sum2d << endl;
}
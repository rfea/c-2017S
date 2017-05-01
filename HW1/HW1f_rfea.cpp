/*
HW1f - Mystery Sum

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangi and John Martin.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cout << "Enter a number" << endl;
	cin >> n;

	float s = 0;
	
	for (float i = 1; i <= n; i++) {
		s += 1/(i*i);
	}

	cout << "Summation from n = 1 up to n = " << n << " of 1/n^2 = " << s << endl;

	n = 100000;
	float s1 = 0;
	float s2 = 0;

	for (float i = 1; i <= n; i++) {
		s1 += 1/(i*i);
	}
	for (float i = n; i > 0; i--) {
		s2 += 1/(i*i);
	}
	
	cout << endl;
	cout << "Summation from n = 1 up to large n of 1/n^2" << endl;
	cout << "Printed forwards and backwards respectively" << endl;
	cout << sqrt(6 * s1) << '\n';
	cout << sqrt(6 * s2) << '\n';
}
/*
HW1b - Convergence of n-gons

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangi and John Martin.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	cout << "Enter n" << endl;
	cin >> n;

	double pi = 3.14159265359;
	double r = 1;

	// r_n = (r_n-1)/(cos(pi/n))
	// n = 2 .... r_2 = r_1/cos(pi/2)
	// n = 3 .... r_3 = r_2/cos(pi/3)

	for (int i = 3; i <= n; i++) {
		r = r / (cos(pi / i));
	}

	cout << "(n = " << n << ") Radius = " << r << endl;

	n = 10;
	r = 1;
	for (int i = 3; i <= n; i++) {
		r = r / (cos(pi / i));
	}
	cout << "(n = " << n << ") Radius = " << r << endl;
	n = 100;
	r = 1;
	for (int i = 3; i <= n; i++) {
		r = r / (cos(pi / i));
	}
	cout << "(n = " << n << ") Radius = " << r << endl;
	n = 1000;
	r = 1;
	for (int i = 3; i <= n; i++) {
		r = r / (cos(pi / i));
	}
	cout << "(n = " << n << ") Radius = " << r << endl;
	n = 10000;
	r = 1;
	for (int i = 3; i <= n; i++) {
		r = r / (cos(pi / i));
	}
	cout << "(n = " << n << ") Radius = " << r << endl;
	n = 100000;
	r = 1;
	for (int i = 3; i <= n; i++) {
		r = r / (cos(pi / i));
	}
	cout << "(n = " << n << ") Radius = " << r << endl;
	n = 1000000;
	r = 1;
	for (int i = 3; i <= n; i++) {
		r = r / (cos(pi / i));
	}
	cout << "(n = " << n << ") Radius = " << r << endl;
}
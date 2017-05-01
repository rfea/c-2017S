/*
HW1e - Read in number and compute n factorial

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangiarella and John Martin.
*/

#include <iostream>
using namespace std;

int main() {
	double n;
	cout << "Enter n" << endl;
	cin >> n;

	if (n == 0) {
		cout << "1" << endl;
	}
	else if (n == 1) {
		cout << "1" << endl;
	}
	else {
		for (int i = n - 1; i > 0; i--) {
			n *= i;
		}
	}
	cout << "n! = " << n << endl;
}
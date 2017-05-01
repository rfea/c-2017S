/*
HW1a - 3n+1 conjecture

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangi and John Martin.
*/

#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter n" << '\n';
	cin >> n;

	cout << "Converging to 1" << '\n';
	
	while (n != 1) {

		if (n % 2 == 1) {
			n = 3 * n + 1;
		}

		cout << n << '\n';

		if (n % 2 == 0) {
			n = n / 2;
		}
	}
	cout << n << '\n';
}
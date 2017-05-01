/*
HW1c - sum the numbers from 1 to 100

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangi and John Martin.
*/

#include <iostream>
using namespace std;

int main() {
	int n = 100;

	// using Gauss formula n(n+1)/2
	cout << "Method 1: Gauss Formula" << '\n';
	n = n * (n + 1) / 2;
	cout << "Sum = " << n << '\n';

	cout << "Method 2: Loop" << '\n';
	int x = 0;
	for (int i = 1; i <= 100; i++) {
		x += i;
	}
	cout << "Sum = " << x << '\n';
}
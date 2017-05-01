/*
HW1g - Print String

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangiarella and John Martin.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string numberString;
	cout << "Enter a number" << endl;
	cin >> n;

	if (n == 0) {
		char x = '0';
		numberString = x + numberString;
	}
	while (n > 0) {
		char x = n % 10 + '0';
		numberString = x + numberString;
		n /= 10;
	}

	cout << numberString << endl;
}
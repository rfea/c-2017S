/*
HW2b - Primes

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangiarella and John Martin.
*/

#include <iostream>
using namespace std;

bool isPrime(unsigned long long p) {
	if (p <= 1) {
		return false;
	}
	for (int i = 2; i < p; i++) {
		if (p % i == 0) {
			return false;	//is not prime
		}
	}
	return true;	// is prime
}

int main() {
	unsigned long long p;
	cout << "Enter number to test if prime" << endl;
	cin >> p;

	if (isPrime(p) == 1) {
		cout << "prime" << endl;
	}
	else {
		cout << "not prime" << endl;
	}
	
	return 0;
}
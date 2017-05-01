/*
HW2c - Multiple Primes

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangiarella and John Martin.
*/

#include <iostream>
using namespace std;

bool isPrime(unsigned long long a) {
	if (a <= 1) {
		return false;
	}
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return false;	//is not prime
		}
	}
	return true;	// is prime
}

int countPrimes(unsigned long long a, unsigned long long b) {
	int count = 0;

	for (a; a <= b; a++) {
		if (isPrime(a) == 1) {
			count++;
		}
	}

	return count;
}

int main() {
	unsigned long long a;
	unsigned long long b;
	cout << "Enter two numbers for a range to check for primes" << endl;
	cin >> a >> b;

	countPrimes(a, b);

	cout << "Number of primes are: ";
	cout << countPrimes(a,b) << endl;

	return 0;
}
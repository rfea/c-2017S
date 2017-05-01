/*
HW1e - Functions

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangiarella and John Martin.
*/

#include <iostream>
using namespace std;

double fact(unsigned int n) {
	double rtn = n;
	if (rtn == 0) {
				return 1;
			}
			else if (rtn == 1) {
				return 1;
			}
			else {
				for (int i = rtn - 1; i > 0; i--) {
					rtn *= i;
				}
			}
			return rtn;
}

double fact2(unsigned int n) {	// recursive
	double rtn = n;
	if (rtn == 1) {
		return 1;
	}
	else {
		return rtn * fact2(rtn - 1);
	}
}

int fibo(unsigned int n) {
	int x = 1;
	int y = 1;
	int z = 0;

	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		for (int i = 3; i <= n; i++) {
			z = x + y;
			x = y;
			y = z;
		}
		return z;
	}
}

int fibo2(unsigned int n) {		// recursive
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return fibo2(n - 1) + fibo2(n - 2);
	}

}

double choose(double n, double r) {
	// choose(n,r) = n!/(r!(n-r)!)
	double choose = 0;
	double nFact = fact(n);
	double rFact = fact(r);
	double diffFact = fact(n-r);

	choose = nFact/(rFact * diffFact);
	return choose;
}

int main() {
	cout << fact(5) << ' ' << fact2(5) << '\n';
	cout << fact(15) << ' ' << fact2(15) << '\n';
	cout << fibo(5) << ' ' << fibo2(5) << '\n';
	cout << fibo(13) << ' ' << fibo2(13) << '\n';
	cout << choose(52,6) << '\n';

	return 0;
}
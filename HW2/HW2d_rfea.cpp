/*
HW1d - n Choose r

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangiarella and John Martin.
*/

#include <iostream>
using namespace std;

double factorial(unsigned int n) {
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

double choose(double n, double r) {
	// choose(n,r) = n!/(r!(n-r)!)
	double choose = 0;
	double nFact = factorial(n);
	double rFact = factorial(r);
	double diffFact = factorial(n-r);

	choose = nFact/(rFact * diffFact);
	return choose;
}


int main() {
	double n;
	double r;
	cout << "Calculate choose(n, r)" << endl;
	cout << "Enter n and r" << endl;
	cin >> n >> r;

	choose(n, r);
	
	cout << "choose(" << n << ", " << r << ") = " << choose(n,r) << endl;

	return 0;
}
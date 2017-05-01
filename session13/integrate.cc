#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// double sin(double x)
// 
double f(double x) { return x*x; } // integrate(f, 0, 1) = 1/3

typedef double (*FuncOneVar)(double x); //there is a pointer to function

// f -> give a pointer to code
double euler(FuncOneVar f, double a, double b, double n) {
	double sum = 0;
	int n = 16;
	double h = (b - a) / n;

	int i;
	for (i = 0, x = a; i <= n; x+= h, i++) {
		sum += f(x);
	}
	return sum * h;
}

// error for trap is O(h^2)
// Euler-Maclaurin theorem trao() = I + O(h^2) + O(h^4) + O(h^6) + ...
double trap(FuncOneVar f, double a, double b, double n) {
	double h = (b - a) / n;
	int i;
	double x;
	double sum = (f(a) + f(b)) / 2;

	for (i = 1, x = a+h; i < n; x+= h, i++) {
		sum += f(x);
	}
	return sum * h;
}

double trap(FuncOneVar f, double a, double b, double n, double eps) {
	double h;
	double lastsum, sum2 = 1e30;
	do {
		lastsum = sum2;
		double h = (b - a) / n;
		double x;
		double sum2 = (f(a) + f(b)) / 2;

		for (int i = 1, x = a+h; i < n; x+= h, i++) {
			sum2 += f(x);
		}
		sum2 *= h;
		n = n * 2;
	} 
	while(abs(sum2 - sum) > eps);
	return sum2;
}

// Romberg		(4 * I2 - I4) / 3

int main() {
	for (int n = 2; n < 1000000; n *= 2) {
		cout << setprecision(15) << n << '\t' << euler(f, 0, 1, n) << '\t' << trap(f, 0, 1, n) << '\n';
	}

	cout << trap
}
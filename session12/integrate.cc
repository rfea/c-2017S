#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// double sin(double x)
double f(double x) { return x*x; } // integrate(f, 0, 1) = 1/3

typedef double (*FuncOneVar)(double x);

double integrate(FuncOneVar f, double a, double b, double n) {
	double sum = 0;
	int n = 16;
	double h = (b - a) / n;

	int i;
	for (i = 0, x = a; i <= n; x+= h, i++) {
		sum += f(x);
	}
	return sum / n * h;
}

int main() {
	for (int n = 2; n < 1000000; n *= 2) {
		cout << setprecision(15) << n << '\t' << integrate(f, 0, 1, .001) << '\n';
	}
}
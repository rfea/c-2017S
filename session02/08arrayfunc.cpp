#include <iostream>
#include <cmath>
#include <random>		// rand is the old junk
// want random!!!
using namespace std;

void fillRandom(int a[], int n, int m){
	default_random_engine generator;
	uniform_int_distribution<int> distribution(0, m);

	for (int i = 0; i < n; i++) {	// if you put n+3, it will fill array with random memory values
		a[i] = distribution(generator); // fill array "a" with random integers from 0 to 999
	}
}

double mean(int a[], int n) {



}

void stats(int a[], int n, double& mean, double& var) {



}

void stats(int a[], int n, double& mean, double& var, double& min, double& max) {



}

void box(double xy[], int n, double& xMin, double& xMax, double& yMin, double& yMax) {


}


int main() {
	const int n = 100;
	int a[n] = {0}; // this will initialize the whole array to contain zeroes
	fillRandom(a, n);

	int b[200] = {0};
	fillRandom(b, sizeof(b)/sizeof(int));
	double mean, var, min, max;
	stats(b, sizeof(b)/sizeof(int), mean, var, min, max);
	cout << mean << ' ' << var << ' ' << min << ' ' << max << '\n';
	
	double points[] = {1.0, 2.5, 2.0, 1.5, 3.0, -1.6, -1.5, -2.5, -1, -3.0};
	double xMin, xMax, yMin, yMax;
	box(points, 5, xMin, xMax, yMin, yMax);
	cout << xMin << xMax << yMin << yMax;

}
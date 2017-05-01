#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

int main() {
	mt19937 rnd(0); 	// always test with random number generator seeded to a specific value
	// random numbers will always be the same in every run, which is boring!
	// when code works, remove the zero and it will seed with the time

	normal_distribution<> normal(0, 1) // mean 0, variance 1
	int hist[100] = {0};

	for (int i = 0; i < 400; i++) {
		double x = normal(rnd);
		// cout << x << 't';
	}

}
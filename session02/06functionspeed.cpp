#include <iostream>
using namespace std;

double f(double x) {x return x * x; }

int main() {
	const int n = 1000000000;
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum = sum + f(i);

	return 0;


	// this doesn't print anything because the compiler realizes
	// nothing is being done with the results 

	const long n = 1000000000L;
	long sum = 0;
	for (long i = 1; i <= n; i++)
		sum = sum + f(i);

	return 0;


	// this doesn't print anything because the compiler realizes
	// nothing is being done with the results 

	const long long n = 1000000000LL;
	long sum = 0;

	for (long long i = 1; i <= n; i++)
		sum = sum + f(i);

	return 0;


	// now with cout << sum, it takes forever 

	const long long n = 1000000000LL;
	long sum = 0;

	for (long long i = 1; i <= n; i++)
		sum = sum + f(i);
	cout << sum;
	return 0;



	const long long n = 100000000LL;
	long sum = 0;

	for (long long i = 1; i <= n; i++)
		sum = sum + f(i);
	cout << sum;
	return 0;
}
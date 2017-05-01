#include <iostream>
#include <iomanip>	// lets you change the precision of what is printing
using namespace std;

int main() {
	float sum = 0;	// double sume is much more accurate
	for (int i = 1; i < 100; i++) // or int i can be float i
		sum+= 1/i;	// wrong. several possible solutions below
			sum+= 1.0f/i;
			sum+= 1/(float)i;
			sum+= 1/float(i);


	cout << sum << endl;

	return 0;
}
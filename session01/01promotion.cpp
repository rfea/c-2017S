#include <iostream>
#include <cstdint>
using namespace std; 

int x = 0; // global variables are always intialized to binary zero

int main(){
	float f = 1.5f; // 1.500000
	double d = 1.5; // 1.5000000000000
	long double e = 1.5000000000000000000000000000000000000L; // depends on implementation

	double Na = 6.022e+23;	// exponential notation

	double d1 = 1 + 1.5;	// typw promote 1 to a double (1.0)
	double d2 = 3 / 2;  	// first compute integer 3/2 (1) then convert to 1.0
	double d3 = 1.5f * 3; 	//left it has float, right it has single precision integer. 
							// promote 3 --> float (3.0f) -> convert to double
	// subtle question, does it do the arithmetic at full double precision? Don't know!

	cout << d1 << '\n\' << d2 << '\n' << d3 << '\n';
}
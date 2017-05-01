#include <iostream>
using namespace std;

int main() {
	int a = 1;
	const int b = 2;
	int * c;		// c is a pointer to an integer

	cout << &a << '\n';
	cout << & ::a << '\n';


	c = &a;	// c points to the address of a
	cout << *c;   // prints the value of a which is 1
	
	long int x = 1;
	// c = (int*)x;
	//cout << *c << '\n';

	int d[5] = {1 ,2, 3};
	c = &d[0];	// c is now first element of d
	cout << *c;

	*c++ = 5;	// writes 5 to d[0], now c = &d[1] (or second element of d)
	++*c;	// d[1] = 3 (2+1=3)
	*++c = 4;	// first increments c, then writes 4 into it d[2] = 4
	cout << (*c)++; 	// first print out d[2] (4) then d[2] = 5


}
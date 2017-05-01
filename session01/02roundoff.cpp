#include <iostream>
using namespace std; 

int x = 0; // global variables are always intialized to binary zero

int main(){
	for (int i = 1; i <= 10; i++){
		cout << i;
	}
	cout << '\n';
	for (float x = 0.0; x <= 10.0f; x += .1f){
		cout << x << ' ';
	}
	cout << '\n';

	/*	this creates a giant comment!

	1/2 = 0.5
	1/4 = 0.25
	1/10 = 0.1
	1/3 = 0.33333333333333333

	for a computer, stored in base 2	2^-1, 2^-2, 2^-3, 1/2, 1/4, 1/8, ...
	1/10 = 1/16 + 1/64 + 1/256 + ...

	in binary


	*/

	float x; // x is visible after the loop is over
	for (x = 0.0; x <= 10000000.0f; x += .1f){ // x + y should never be bigger than x
		;										// a float can only keep track of 7 digits and 10,000,000.0 is 9 digits
	}
	cout << x << '\n';


	double y; // y is visible after the loop is over
	for (y = 0.0; y <= 10000000.0f; y += .1f){ // x + y should never be bigger than x
		;										// a float can only keep track of 7 digits and 10,000,000.0 is 9 digits
	}
	cout << x << '\n';
}

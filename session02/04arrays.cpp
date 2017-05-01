#include <iostream>
using namespace std;

int main() {
	int x = 2;

	int b[3]	// 3 numbers 
				// b[0] b[1] b[2]

	int c[3] = {1, 2, 3};
	int d[] = {1, 2, 3}; 	// d[0] = 1, d[1] = 2, d[2] = 3
	//#define SIZE 200; //defining macro
	// macros are ancient and bad C++
	
	// 2 different ways to define constant

	enum { SIZE = 200 };
	const int SIZE = 200

	int e[200] = {5}; 		// e[0] = 5, e[1] = 0, e[2] = 0, ..., e[99] = 0
	int e[SIZE] = {5};


	for (int i = 0; i < SIZE; i++) {
		e[i] = 3;
	}

	int f[2][3] = {		// 2 dimensional array
		{5, 4, 3},	// row 1
		{2, 1, 6}	// row 2
	};

	int g[2][3][4][5][6]; 	// multi-dimensional array

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << f[i][j] << ' ';
		}
		cout << '\n';
	}

	cout << sizeof(int) << '\n';	// on PC = 4
	cout << size(char) << '\n';		// always 1 by definition

	cout << sizeof(f) << '\n';		// 24 bytes
	cout << sizeof(f[0]) << '\n';	// 12 bytes


}
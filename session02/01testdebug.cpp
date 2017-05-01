#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 10; i++)	// prints nothing
		cout << i << ' ';
	cout << '\n';
	for (int i = 1; i >= 10; i++)	// prints nothing
		cout << i << ' ';
	cout << '\n';
	for (int i = 3; i <= 10; i+=2) 	// prints 3,5,7,9
		cout << i << ' ';
	cout << '\n';
	for (int i = 1; i < 100; i+= i)	
		cout << i << ' ';
	cout << '\n';


	int x = 0;
	while (x < 10) {
		cout << x << ' ';
		x++;
	}
	cout << x << '\n';	// will print out 10

	// for loop and while loop are the same thing for compiler

	int n = -1;
	while (n < 5 || n > 19) {
		cin >> n;
	}

	int n;
	do {
		cin >> n;
	} while (n < 5 || n > 19)
}

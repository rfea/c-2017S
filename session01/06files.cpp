#include <iostream>
using namespace std;

int main() {
	ofstream f("test.dat");		// write to file called "test.dat"
	f << "hello" << 5 << 2 + 3 << '\n';

	for (int i = 0; i < 1000000; i++)	// last number being printed is 999999
		f << i;

	// to read in a file ... ifstream 


	return 0;
}
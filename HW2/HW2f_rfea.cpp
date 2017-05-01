/*
HW1f - Array Statistics

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangiarella and John Martin.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream datFile("2f.dat");

	if (!datFile) {
		cout << "File failed to open" << endl;
	}
	else {
		int n = 0;
		datFile >> n;
		int x[n];

		while(!datFile.eof()) {
			for (int i = 0; i < n; i++) {
				datFile >> x[i];
			}
		}

		double sum = 0;

		for (int i = 0; i < n; i++) {
			sum += x[i];
		}

		sum /= n;
		cout << sum << endl;
	}

	return 0;
}
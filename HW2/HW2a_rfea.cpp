/*
HW2a - Windchill

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangiarella and John Martin.
*/

#include <iostream>
#include <cmath>
using namespace std;


int main() {
	double windChill = 0;

	for (int w = 5; w <= 60; w += 5) {
		for (int t = 40; t >= -45; t -= 5) {
			windChill = 35.74 + 0.6215 * t - 35.75 * pow(w, 0.16) + 0.4275 * t * pow(w, 0.16);

			cout << int(nearbyint(windChill)) << '	';
		}

		cout << endl;
	}
	
	return 0;
}
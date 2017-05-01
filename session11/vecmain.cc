#include <iostream>		// include iostream before Vector3
#include "Vector3.hh"
using namespace std;

int main() {
	Vector3<int> v1(1, 2, 3);
	Vector3<double> v2(1.5, 2);
	Vector3<double> v3 = v1 + v2;
	cout << v3;
}
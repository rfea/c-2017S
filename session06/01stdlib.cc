#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <random>
#include <algorithm>
using namespace std;

int main() {
	double x = 5.5 + 2.75;
	cout << x << '\n';
	cout << setprecision(15) << x << '\n';
	cout << setw(10) << setprecision(8) << x << "\n";

	//vector<double> a;
	vector<int> a;
	for (int i = 0; i < 100; i++) {
		a.push_back(i);
	}
	for (int i = 0; i < 100; i++) {
		cout << a.a[i] << ' ';
	}
	cout << '\n';

	auto x = 5;	// automatically uses int
	auto y = 5.2;	// double

	for (auto z : a) {
		cout << z;
	}

	for (auto& z : a) {
		z *= 2;
	}

	for (auto& z : a) {
		z *= 2;
	}

	for (auto z: a) {
		cout << z;
	}
	cout << '\n';

	int perm[] = [1, 2, 3, 4];
	do {
		for (auto p : perm) {
			cout << p << ' ';
		}
		cout << '\n';
	}
	while (std::next_permutation(&perm[0], &perm[4]));

	string s = "123 9876 12345";
	istringstream f(s);
	int r, s, t;
	f >> r >> s >> t;
}
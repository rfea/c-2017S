#include <iostream>
using namespace std;

void f(int a = 5, double b = 0.0) {
	cout << a << endl;
}

void f(double a) {
	cout << "hi" << endl;
}

int main() {
	f(2.5);
}
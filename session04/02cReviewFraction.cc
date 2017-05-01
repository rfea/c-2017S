#include <iostream>
using namespace std;

class Fraction {
private:
	int num, den;
public:
	Fraction(int num, int den) : num(num), den(den) {}
	Fraction(int num) : num(num), den(1) {}
	Fraction() : num(0), den(1) {}
	friend ostream& operator <<(ostream& s, Fraction f) {	// this -> (ostream&s, const Fraction f) is promising not to change parameter f
		f.num = 19;
		return s << f.num << "/" << f.den;
	}

	// this is the old way of printing things
	void print() const {	// if you have a constant object, you need a constant method
		// cout << this->num << "/" << this->den;
		cout << num << "/" << den;
	}



	friend Fraction add(const Fraction& a, const Fraction& b) {	//
		
	}

	friend Fraction operator +(Fraction a, Fraction b) {	// this wont violate const because it is copying x and y. no way originals can be changed
		return Fraction(a.num * b.den + b.num * a.den, a.den * b.den);	// privacy is on a class basis. by being a friend it is ok to access num and den
	}

	friend operator -(Fraction a, Fraction b) {
		return Fraction(a.num * b.den - b.num * a.den, a.den * b.den);
	}

	friend operator -(Fraction a) {
		return Fraction(-a.num, a.den);
	}

	friend operator ++(Friend a, int x) {	// a++

	}

	friend operator ++(Fraction a) {	// ++a

	}

};

int main() {
	const Fraction x(1,2);	// this would use the first constructor
	cout << x;	// passed by value (x is copied), x is not changed
	x.print();

	const Fraction y(1,3);

	Fraction z = x + y;
	Fraction w = x - y;
	Fraction f = -x;

	int a = 5;
	int b = a++; 	// add 1 to a, but FIRST b = a 		b = 5, a = 6
	int c = ++a;	// add 1 to a, then c = a 			a = 7, c = 7
	a++;
	++a;

	// a = ????? 9
	int d = a++ + a++;		// Implementation Defined (Don't Do This)

	// Can Overload any operator you want, except for......
	// a.b 			Fraction::			sizeof(int)				? :				.*

	int e = 3 > 4 ? 5 : 6;

}
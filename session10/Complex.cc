#include <iostream>
#include <string>

using namespace std;

// can't define twice

int x;
// ILLEGAL  int x;


extern int x;
extern int x;
extern int x;
extern int x;
extern int x;
extern int x;

// typedef double Precision;
template <typename Precision>
class Complex {
private:
	Precision real, imag;
public:
	Complex(Precision r, Precision i) : real(r), imag(i) {}

	friend Complex operator +(Complex a, Complex b) {
		return Complex(a.real + b.real, a.imag + b.imag);
	}

	Complex neg() const {
		return Complex(-real, -imag);
	}

	// don't write it with <Precision>
	/*
	Complex<Precision> neg() const {
		return Complex(-real, -imag);
	}
	*/
	// NEED <Precision> when using friend

	friend Complex operator +(Complex a, Complex b);
	friend Complex<Precision> operator -(Complex<Precision> a, Complex<Precision> b) {
		return Complex<Precision>(a.real - b.real, a.imag - b.imag);
	}

	friend ostream& operator <<(ostream& s, const Complex<Precision>& c) {
		return s << "(" << c.real << ', ' << c.imag << ')';
	}
};

typename<typename Precision>
Complex<Precision> operator +(Complex<Precision> a, Complex<Precision> b) {
	return Complex(a.real + b.real, a.imag + b.imag);
}

class Person {
private:
	string fname, lname;
}

int main() {
	Complex<double> c1(1.5, 2.0);
	Complex<double> c3 = c1.neg();

	Person p1, p2;
	// Complex<Person> c2(p1, p2);
	//Testing is hard!!! Complex<string> c2(p1, p2);
}

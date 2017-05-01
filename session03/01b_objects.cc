#include <iostream>
using namespace std;

// goal: represent numbers like 1/2, 2/3, 5/2, what about 5/0?

class Fraction {
private:
	int num, den;
public:
	Fraction(int n = 0, int d = 1) : num(n), den(d) {}
	void print() {	// this member function (method) is READONLY
		cout << num << "/" << den;
	}

	void print() const; 	// place const here to have const Fraction a(1,2) work
};

void Fraction::print() const {	
	cout << num << "/" << den;
}

int main() {
	Fraction a(1,2); 	// 1/2
	Fraction b(3); 		// 3/1
	Fraction c;			// 1/1  -->  0/1	NOT    1/0

	a.print(); cout << ' ';	// sending a message to a method
	b.print(); cout << ' ';
	c.print();
	cout << '\n';


	const Fraction a(1.2)	// only way for this to work is to put constant in different place
							// put constant in print method
							// constants should be used to improve program. 
								// if a variable doesn't need to change, don't let it
								// might get compiler error but it will remind you that a variable shouldn't change
								// compiles and runs code faster with constants


}
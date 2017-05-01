#include <iostream>
using namespace std;

class Matrix {
private:
public:



};

// goal: represent numbers like 1/2, 2/3, 5/2, what about 5/0?

class Fraction {
private:
	int num, den;
	const int num, den;
public:
	/*
	Fraction(int n, int d) {	// constructor has same name as class
		num = n; den = d;		// it's job is to gaurantee class initialization
	} 
	*/

	//Fraction(int n, int d) : num(n), den(d) {}	// same as function above with different storing of n and d
	//Fraction(int n) : num(n), den(1) {}					
	//Fraction() : num(0), den(1) {}

	Fraction(int n = 0, int d = 1) : num(n), den(d) {}		// equivalent to above three Fraction lines

	void print() {	// function inside class is a method
		cout << num << "/" << den;
	}


};

/*
4 key words in object programming
class 		object
methods		messages

class = specification of an object
object = instance of a class
methods = 

encapsulation: hiding the details of an object internally (private)

*/

int main() {
	int c = a + b;
	matrixadd(c, a, b);

	Fraction a(1,2); 	// 1/2
	Fraction b(3); 		// 3/1
	Fraction c;			// 1/1  -->  0/1	NOT    1/0
	Fraction d();		// THIS IS NOT AN OBJECT (it's a function prototype)

	int a = 3;	// initialization of a. creating a and loading it with a value.
	int b;		// declare variable without initializing it
	cout << b;	// this will print random junk
	b = 3;		// now b is initialized


	a.print();

}
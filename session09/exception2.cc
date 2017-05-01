#include <iostream>
using namespace std;

class DivByZero {
private:
	int linenum;
	const string filename;
public:
	DivByZero(int linenum, const char filename[]) : linenum(linenum), filename(filename) {}

	friend ostream& operator <<(ostream& s, const DivByZero& e) {
		s << "DivByZero at " << e.filename << ": " << e.linenum << '\n';
	}

};

class Matrix {
private:

public:
	friend Matrix operator +(const Matrix& a, const Matrix& b) {
		if (a.rows != b.rows || a.cols != b.cols) {
			throw BadSize(__LINE__, __FILE__);
		}
	}

};

void g() throw (DivByZero) {
	int x = 0, y = 2;
	if (x == 0) {
		throw DivByZero(__LINE__, __FILE__);
	}
	y / x;
}

void f() throw (DivByZero) {
	g();
}

int main() throw (){
	try {
		f();
	}
	catch (const DivByZero& e) {
		cout << e << '\n';
	}
}
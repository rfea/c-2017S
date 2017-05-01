int a;
int dummy;
int a123;
// ILLEGAL: int 1a;
// ILLEGAL: int a+1;
int asdasfd12412;
int _abc; // DON'T DO THIS. variables beginning with _ are reserved to the compiler
int __SYMBOLS__; // Don't do this: reserved to the standard

// __LINE__			// this is the line number in the current file
// __FILE__			// the file name you are in
// __FUNCTION__		// ????


#include <iostream>
using namespace std;

class BadSize {
private:
	int linenum;
	const string filename;
public:
	BadSize(int linenum, const char filename[]) : linenum(linenum), filename(filename) {}

	friend ostream& operator <<(ostream& s, const BadSize& e) {
		s << "BadSize at " << e.filename << ": " << e.linenum << '\n';
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

int main() {
	try {
		int a = 5, b = 6;
		if (a != b) {
			throw BadSize(__LINE__, __FILE__);
		}
	}
	catch (const BadSize& e) {
		cout << e << '\n';
	}
}
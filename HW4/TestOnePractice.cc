#include <iostream>
using namespace std;

class Array{
private:
	enum {n = 3};
	int a[n];
public:
	Array(int x, int y, int z) {
		a[0] = x;
		a[1] = y;
		a[2] = z;
	}

	friend ostream& operator <<(ostream& s, Array x) {
		s << "[";
		for (int i = 0; i < x.n; i++) {
			s << x.a[i] << " ";
		}
		s << "]";
		return s;
	}
 
	friend Array operator +(Array x, Array y) {
		int c[3];
		for (int i = 0; i < n; i++) {
			c[i] = x.a[i] + y.a[i];
		}
		return Array(c[0],c[1],c[2]);
	}

	friend Array operator -(Array x, Array y) {
		int c[3];
		for (int i = 0; i < n; i++) {
			c[i] = x.a[i] - y.a[i];
		}
		return Array(c[0],c[1],c[2]);
	}

	friend Array operator *(Array x, Array y) {
		int c[3];
		for (int i = 0; i < n; i++) {
			c[i] = x.a[i] * y.a[i];
		}
		return Array(c[0],c[1],c[2]);
	}

	friend Array operator /(Array x, Array y) {
		int c[3];
		for (int i = 0; i < n; i++) {
			c[i] = x.a[i] / y.a[i];
		}
		return Array(c[0],c[1],c[2]);
	}
};

int main() {
	int x, y, z;
	int i, j, k;
	cout << "What values are in the first array?" << endl;
	cin >> x >> y >> z;
	
	cout << "What values are in the second array?" << endl;
	cin >> i >> j >> k;
	
	Array a(x, y, z);
	Array b(i, j, k);
	cout << a << endl;
	cout << b << endl;
	
	Array c = a + b;
	cout << c << endl;;

	Array d = a - b;
	cout << d << endl;

	Array e = a * b;
	cout << e << endl;

	Array f = a / b;
	cout << f << endl;

}
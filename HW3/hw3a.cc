/*
HW3a - Vec3d

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangiarella and John Martin.
*/

#include <iostream>
using namespace std;

class Vec3d {
private:
	double xray, yband, zener;

public:
	Vec3d(double x, double y = 0.0, double z = 0.0) : xray(x), yband(y), zener(z) {} // constructor

	friend ostream& operator << (ostream& s, Vec3d a) {
		s << a.xray << "," << a.yband << "," << a.zener;
		return s;
	}

	friend Vec3d operator +(const Vec3d a, Vec3d b) {
		return Vec3d (a.xray + b.xray, a.yband + b.yband, a.zener + b.zener);
	}

	Vec3d add(Vec3d b) const {
		return Vec3d (xray + b.xray, yband + b.yband, zener + b.zener);
	}

	double dot(Vec3d b) const {
		return double (xray * b.xray + yband * b.yband + zener * b.zener);
	}

	friend Vec3d operator *(const Vec3d a, double factor) {
		return Vec3d (a.xray * factor, a.yband * factor, a.zener * factor);
	}

	friend Vec3d operator *(double factor, const Vec3d a) {
		return Vec3d (a.xray * factor, a.yband * factor, a.zener * factor);
	}
};

int main() {
	const Vec3d a(1.0, 2, 2.5); //(1.0, 2.0, 2.5) (x,y,z)
	cout << a << '\n';
	Vec3d b(5.0);         //(5.0, 0.0, 0.0)
	Vec3d c = a + b;
	cout << c << '\n';
	Vec3d c2 = a.add(b);   // call a method
	cout << c2 << '\n';
	double d = a.dot(b); //  dot product = a.x*b.x + a.y*b.y + a.z*b.z
	cout << d << '\n';
	Vec3d e = a * 2;   //scalar multiplication
	cout << e << '\n';
	Vec3d f = 2 * a;   //scalar multiplication
	cout << f << '\n';

	return 0;
}
class Netwon3d {
private:
	static const double G = ...;
	double m;	// mass
	Vec3d x;
	double r;	// radius



public:
	constructor...

	// compue acceleration
	void accel(Netwon3d other) {}

};

/*
	what is its purpose
	@author: Dov Kruger
*/

class System {
private:
	vector<Netwon3d*> bodies;

public:
	System(....)

	// compute accelerations due to gravity by everyone against
	void accelerations() {

	}
}
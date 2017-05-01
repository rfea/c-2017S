#ifndef SPORTSCAR_HH_
#define SPORTSCAR_HH_

#include "Car.hh"

class SportsCar : public Car {	// a SportsCar IS_A kind of Car
private:
	double horsePower;
public:
	SportsCar(int s, const std::string& c, double h) : Car(s, c), horsePower(h) {}

	int payToll() const {
		return 3;
	}
};

#endif
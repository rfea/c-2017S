#ifndef TRUCK_HH_
#define TRUCK_HH_

#include "Vehicle.hh"

class Truck : public Vehicle {
private:
	int numpassengers;
	double weight;
	int axles;
public:
	// Bus(int speed, int numpassengers) : speed(speed) is illegal
	// have to call the constructor for Vehicle to gain access to speed
	Bus(int speed, int numpassengers) : Vehicle(speed), 
										numpassengers(numpassengers),
										{}

	int payToll() const {
		return 3;
	}

};

#endif
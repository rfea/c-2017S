#ifndef BUS_HH_
#define BUS_HH_

#include "Vehicle.hh"

class Bus : public Vehicle {
private:
	int speed;
	int numpassengers;
public:
	// Bus(int speed, int numpassengers) : speed(speed) is illegal
	// have to call the constructor for Vehicle to gain access to speed
	Bus(int speed, int numpassengers) : Vehicle(speed), numpassengers(numpassengers) {}

	int payToll() const {
		return 3;
	}

};

#endif
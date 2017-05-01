// wrapping classes like this helps prevent declaring things twice

#ifndef VEHICLE_HH_
#define VEHICLE_HH_

class Vehicle {
private:
	int speed;
public:
	Vehicle(int s) : speed(s) {}
	
	int getSpeed() const {
		return speed;
	}

	virtual int payToll() const = 0; //pure virtual
	// means all children must implement this
};

#endif
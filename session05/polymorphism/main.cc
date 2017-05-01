// can include SportsCar which includes Car
// can only define Car once but here it is defined twice by Car.hh and SportsCar.hh when SportsCar pulls in Car.hh
// this will cause an error. can choose between Car.hh and SportsCar.hh

#include <iostream>
#include "SportsCar.hh"
#include "Bus.hh"

int main() {
	Car c1(100, "Red");
	Bus b(55, 14); // speed, numpassengers
	SportsCar s1(140, "Blue", 400.0);
	Truck t(70, 18000, 5);
	
	std::cout << c1.payToll() << '\n';
	std::cout << b.payToll() << '\n';
	std::cout << s1.payToll() << '\n';
	std::cout << t.payToll() << '\n';

	Vehicle* p = &c1;
	std::cout << p->payToll();	// Car::payToll
	p = &b;
	std::cout << p->payToll() << '\n\n';

	// user can decide
	Vehicle* array[5];	// an array of pointers
	array[0] = &c1;
	array[1] = &b;
	array[2] = &b;
	array[3] = &t;
	array[4] = &s1;

	for (int i = 0; i < 5; i++) {
		cout << array[i]->payToll();
	}

	// c1.drive();
	// s1.drive();

	// ILLEGAL    Car* c = p;
	// base class pointer may
	// all cars are vehicles but not all vehicles are cars
}
#include <iostream>
#include "SportsCar.hh"
#include "Bus.hh"
#include "Truck.hh"

using namespace std;

/*
	Simulate a number of different vehicles going through tollss
*/

class TrafficSim {
private:
	vector< vehichle* > vehicles;
public:
	TrafficSim(int numVehicles) {
		default_random_engine generator;
		
		for (int i = 0; i < numVehicles; i++) {
			uniform_int_distribution<int> dist(0,3);
			int r = dist(generator);  // generates number in the range 1..6 
			
			uniform_int_distribution<int> randSpeed(0,120);
			int speed = randSpeed(generator);  // generates number in the range 1..6 
			
			Vehicle *v;

			// for object oriented programming, you shouldn't have a switch unless you are doing initial development and testing
			switch (r) {
				case 0: v = new Car(speed, "red");
					break;
				case 1: v - new SportsCar(speed, "red", 400.0);
					break;
				case 2: v = new Bus(speed, 14);
					break;
				case 3: v = new Truck(speed, 18000, 5);
					break;
			}

			vehicles.push_back()

		}
	}

	~TrafficSim() {
		for (auto z : vehicles) {
			delete z;
		}
	}

	void payToll() {
		for (auto z : vehicles) {
			cout << (*z).payToll() << '\n';
			cout << z->payToll() << '\n';
		}
	}

};

int main() {
	for (int i = 0; i < 100; i++) {
		TrafficSim sim1(100);
		sim1.payToll();
	}

	// don't do this
	// TrafficSim sim2(100);
	// TrafficSim sim3 = sim3;
	// calls the destructor of sim2... calls destructor of sim3 (deletes the memory)
}
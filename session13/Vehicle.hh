class Vehicle {
public:
	virtual double payToll() const = 0;
	virtual ~Vehicle() = 0;
};

class Car : public Vehicle {};

class Bus : public Vehicle {};

class Truck : public Vehicle {
private:
	int* datal
public:
	Truck() {
		data = nullptr;
	}
	~Truck() {
		delete [] data;
	}

};


Vehicle* list[10] = {nullptr};

list[0] = new Car(..);
list[1] = new Bus(..);
list[2] = new 
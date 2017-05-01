	// only we get to see private stuff. kids do not have access
	// don't get to say who kids are 
	// can say who friends are
	// all data should be private
	// public is what world can see
	// protected is what kids can see


// parent
// base class
class Car {
private:
	string color;
	int speed;
public:
	Car(const string& c, int s) : color(c), speed(s) {}	// will only copy once (using const string&) now instead of twice

	
};

// child
// derived class
class SportsCar : public Car {	// a SportsCar IS_A kind of Car
private:
	double horsePower;
public:
	SportsCar(const string& c, int s, double h) : Car(c, s), horsePower(h) {}

};

int main() {
	Car c1("Red", 100);
	SportsCar s1("Blue", 140, 400.0);
	c1.drive();
	s1.drive();


}
class Engine {
private:
	double hp;
public:
	Engine(double hp) : hp(hp) {}

};

// Inheritance, not good (fails English test)
class Car : public Engine { // A CAR IS_A type of engine

};

// Q: Is it always true (temporal)
// Q: Is it 1:1

class Tire {
private:
	int p;
public:
	Tire(int p) : p(p){}
}


class Car {
private:
	Engine e;
	string model;
	string color;
	Tire w1, w2, w3, w4;
public:
	Car(const string& model, double hp) : e(hp), model(model), color("red"), w1(28), w2(28), w3(30), w4(30) {}

}

class Car2 {
private:
	vector<Engine> e; // handle more than one engine
}





// Problem: software modeling organ ownership and donors

class Heart {
public:
	Heart() {}

};

class Kidney {
public:
	Kidney() {}
};

class Person {
private:
	Heart h;
	Kidney k1, k2;
public:

};

class Person {
private:
	Heart* heart;
	Kidney *k1, *k2;
public:
	Person() {
		heart = new Heart();
		k1 = new Kidney();
		k2 = new Kidney();
	}
	~Person() {
		delete heart;
		delete k1;
		delete k2;
	}
	Person(const Person& orig);// don't do this
	operator =(const Person& orig);// don't do this
};


ofstream f("test.dat");
ofstream g(f);	// can't copy a file stream, what would that mean?



class Stock {
private:
	const long long cusip;
	string symbol;
public:
	Stock(const string& symbol, long long cusip) : cusip(cusip), symbol(symbol) {}

	void f() {
		cusip = 19;
	}
};




// for n:n, many to many relationships
class Person {
private:
	vector<Car*> owned;	// for more than one car

};

 class Car {
 private:
 	vector<Person*> owner; // for more than one owner

 };

 class Person {};

 class Car {};

// can only have one car to one person
// 1:1
map<Car*, Person*> personByCar;
map<Person*, Car*> personByCar;

multimap< >

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;
	int age;
	int count; 		// don't want to count number of people this way
	static int count; 	// in this context, static means class shared
						// if you declare a static variable here, it has to be declared outside too

public:
	// Person(string name, int age):name(name), age(age) {}
	Person(string n, int a):name(n), age(a) {		// above or this will work well
		count++;
	}				

	~Person() {		// called a destructor. above is constructor
		count--;
	}

	friend ostream &operator << (ostream& s, const Person& p) {		// best way
		return s << p.name << " " << p.age;
	}	

	int getCount() {	// member function
		return count;
	}

	static int getMemberCount() {
		return count;
	}

	string getName() {
		return name;
	}

};

int Person::count = 0;

void f() {
	Person p3("Maria", 32);
}

void g(Person p) {
	cout << p << '\n';
}


int main() {
	cout << Person::getCount();
	f();
	const Person p1("Dov", 50);
	cout << p1.getName() << '\n';

	const Person p2("Yu-Dong", 45);
	for (int i = 0; i < 5; i++) {
		g(p2);
	}

	cout << p1 << '\n';
	cout << p2.getMemberCount();
}
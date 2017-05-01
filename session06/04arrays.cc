#include <iostream>
#include <string>
using namespace std;

// compile with g++ -std=c++11

class Person {
private:
	string name;
	int age;
public:
	Person(const string& name, int age) : name(name), age(age) {}

	friend ostream& operator <<(ostream& s, const Person& p) {
		return s << p.name << p.age;
	}

};

int main() {
	cout << sizeof(Person) << "\n";

	int a[10];	// array parameter is a pointer that can't be changed
	int *b = a;	// &a[0]
	for (int i = 0; i < 10; i++) {
		*b++ = 0;
	}
	// b is pointing ONE PAST THE END
	b = &a[9];

	for (int i = 9; i >= 0; i--) {
		*b-- = i;
	}

	// b pointing where? a[-1]

	Person c[3] = {
		Person("Dov", 50),
		{"Yu-Dong", 40}
		Person("Moshe",15)
	};

	for (int i = 0; i < 3; i++) {
		cout << c[i] << '\n';
	}

}
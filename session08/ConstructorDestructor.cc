class A {
public:
	A() { cout << "A"; }
	~A() { cout << "~A"; }
};

class B : class A {
public:
	B() : A() { cout << "B"; }
	~B() : ~A() { cout << "~B"; }
};

int main() {
	for (int i = 5; i > 0; i -= 3) {
		A a1;
		B b1;
	}
}

// output: AAB~B~A~A
// or
// output: AAB~A~B~A
class Complex {
private:
	double r, i;
	static int count; //external


};

int Complex::count = 0;

int n = Complex::getCount();

class A {	// legal but does nothing

};

sizeof(A);	// 1 byte

// if the only constructor is private, the class is useless
class B : public A {
private:
	int x;
	B() {}	// constructors can be private
protected:
	int y;
	void f() {}
public:
	int z; 
};

class C : public B {
public:
	C(int x) : B() { cout << "test"; }

}
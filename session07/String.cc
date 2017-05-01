#include <iostream>
#include <cstdint>
using namespace std;

class String {
private:
	char* p; // --> "kjshf kashdf ksj fhksjfh kasjdfh kasjdfh ksa"   0 = 48
	uint 32_t len; // string length
	uint 32_t capacity;
public:
	String(const char s[]) {
		for (count = 0; s[count] != '\0'; ++count)	{
			p = new char[count];

			for (int i = 0; i < count; ++i) {
				p[i] = s[i];
			}
				len = count;
				capacity = count;
		}

	}

	String() : p(nullptr), len(0), capacity(0) {}
		///p = nullptr; // <-- this is new way... obsolete way -> NULL,  old way -> 0 
	
	~String() {
		delete [] p;	// give back memory
	}

	/*
	this will crash. need to declare it as a const by reference
	String(String orig) {}	
	*/

	String(const String& orig) : p(new char[orig.capacity]), len(orig.len), capacity(orig.capacity) {
		for (int i = 0; i < len; ++i) {
			p[i] = orig.p[i];
		}
	}

	#if 0
	// NASTY CRASH BUG HERE!
	// the order of initialization is the ORDER IN MEMORY
	// not the order in which they are listed in the initializer
	// capacity her is RANDOM...
	
	String(const String& orig) : len(orig.len), capacity(orig.capacity), p(new char[capacity]) {}
	#endif

	String& operator =(const String& orig) {
		if (this != &orig) {
			delete [] p;

			p = new char[orig.capacity];
			len = orig.len;
			capacity = orig.capacity;

			for (int i = 0; i < len; ++i) {
				p[i] = orig.p[i];
			}
		}

		return *this;
	}

	void set(int i, char c) {p[i] = c;}

	friend ostream& operator <<(ostream& s; const String& str) {
		for (int i = 0; i < str.len; ++i) {
			s << str.p[i];
		}
		return s;
	}

};

f(String x) {

}

f(int x) {...}
f(char* x) {...}

f("abc");
f(5);
f(0);

int main() {
	String s1("This is a test");	// constructor
	String s2;			// constructor

	cout << s1 << "\n";	// prints s

	String s3 = s1; // Copy Constructor
					// this will set s3 equal to s1. 
					//system will crash because it will try to delete the same memory location twice in the deconstructor
	String s4 (s1);	// copy constructor
	f(s3);
	s1.set(0, 'x');
	cout << s3;

	String s5("Yoho!");
	s3 = s5;	// operator equals
	s3 = s3;	// if you copy yourself, it first deletes itself which means there is nothing to copy
	s2 = s3 = s4;	// operator equals twice

	/*
	for (p = &a, q = &a + 99; c; p++, q--) // very difficult to prove delete isn't happening
		*q = *p
	*/

	int a = 2, b = 3, c = 4;
	a = b = c = 0;

}
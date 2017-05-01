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

	String

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

	// don't say const since we are changing its pointer
	String(String&& orig) :
		p(orig.p), len(orig.len), capacity(orig.capacity)
	{ 
		orig.p = nullptr;

	}


	void set(int i, char c) {p[i] = c;}

	friend ostream& operator <<(ostream& s; const String& str) {
		for (int i = 0; i < str.len; ++i) {
			s << str.p[i];
		}
		return s;
	}

};

String f() {
	String s1(100000, 'x');
	return s1;
}

int main() {
	for (int i = 0; i < 1000; i++) {
		String s2 = f();
	}
	


}
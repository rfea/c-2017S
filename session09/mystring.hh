#include <cstdlib>
#include <new>

class mystring {
private:
	char* p;
	int size;
public:
	mystring(uint64_t size, char x) throw (bad_alloc) : size(size)  {
		p = new char[size]; // throw bad_alloc

		for (int i = 0; i < size; i++) {
			p[i] = x;
		}
	}
	~mystring() {
		delete [] p;
	}
}
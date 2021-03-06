#include <iostream>
#include <cstdint>

using namespace std;


template<typename T>
class GrowArray {
private:
	T* data;
	uint32_t used;
	uint32_t capacity;

	void grow() {
		capacity = capacity * 2 + 2;
		T* temp = data;
		data = new T[capacity];

		for (int i = 0; i < used; i++) {	// copy old stuff
			data[i] = temp[i];
		}
		delete [] temp;0
	}
public:
	GrowArray() : data(nullptr), used(0), capacity(0) {}

	~GrowArray() {
		delete [] data;
	}

	GrowArray(const GrowArray& orig) throw (bad_alloc) : data(new T[orig.used]), used(orig.used), capacity(orig.used) {
		for (int i = 0; i < used; i++) {
			data[i] = orig.data[i];
		}
		// commonly seen, not neccessary
		// not necessarily more efficient
		// memcpy(data, used*sizeof(int), orig.data);
		
	}

	// this operator = uses "copy and swap" to deallocate the destination
	GrowArray& operator =(const GrowArray& orig) {
		T* temp = data; data = copy.data; copy.data = temp;
		// swap(this, orig);
	}

	GrowArray(GrowArray&& orig) : data(orig.data), used(orig.used), capacity(orig.capacity) {
		orig.data = nullptr;
	}

	void add(const T& v) throw (bad_alloc) {  // declare the only thing that can go wrong
		if (used >= capacity) {
			grow();
		}
		data[used++] = v;
	}


	// x[i] not x [] i
	// cannot be a friend!
	// must be a memory
	// by reference or by value?

	// this is the read only version
	T operator [] (int i) const {
		return data[i];
	}
	// this is the read/write version
	T& operator [] (int i) {

	}


	friend ostream& operator <<(ostream& s, const GrowArray<T>& list) {
		for (int i = 0; i < list.used; i++) {
			s << list.data[i] << ' ';
		}
		return s;
	}

};

GrowArray<int> g() {
	GrowArray<int> a;
	for (int i = 0; i < 10; i++) {
		a.add(i);
	}
	return a;
}

int main() {
	GrowArray<int> f = g();
	GrowArray<string> a;
	a.add("abc");
	a.add("def");

	cout << a[1] << '\n';
	a[1] = 99;

	GrowArray<string> b = a;
	// can use auto instead
	auto b = a;

	GrowArray<string> c;
	c = a;

	cout << f << '\n';
	cout << a << '\n';
	a.add("hhhhh");
	cout << c << '\n';

}
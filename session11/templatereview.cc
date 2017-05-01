template<typename T>
class List {
private:
	unsigned int capacity;
	T* data;
public:
	List() : capacity(0), data(nullptr) {}
	~List() {}

	void add(const T& v) {
		/* 
		step 1: prevent memory leak
		step 2: allocate more memory
		step 3: copy old data
		step 4: i.  set last slot of capacity to new data value
				ii. increment capacity by one to account for additional slot
		step 5: delete the memory
		*/ 

		T* temp = data;

		data = new T[capacity + 1];

		for (int i = 0; i < capacity; i++) {
			data[i] = temp[i];
		}

		data[capacity++] = v;
		/*	same as
		data[capacity] = v;
		capacity++;
		*/
		delete [] temp;

	}

	// copy constructor
	List(const List& orig) : capacity(orig.capacity), data(new T[capacity]) {
		for (int i = 0; i < capacity; i++) {
			data[i] = orig.data[i];
		}
	}

	List& operator =(const List& orig) {
		if (this != &orig) {
			delete [] data;
			capacity = orig.capacity;
			data = new T[orig.capacity];

			for (int i = 0; i < capacity; i++) {
				data[i] = orig.data[i];
			}
		}
		return *this;
	}


};

int main() {
	List<int> a;
	List<int> b;

	a = b;

	List<int> c;

	a = b = c;

	// List<elephant> d;

}
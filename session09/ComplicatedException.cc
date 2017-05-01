#include <new>
using namespace std;

class ComplicatedException {
private:
	int* a; 
	int* b;
public:
	ComplicatedException() {
		a = new int[100];
		try {
			b = new int[10000000000000LL];
		}
		catch (bad_alloc e) {
			delete [] a;
			throw;	// rethrow
		}
	}
	~ComplicatedException() {
		delete [] a;
		delete [] b;
	}
}
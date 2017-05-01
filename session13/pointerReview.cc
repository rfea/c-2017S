// These two functions are identical

void f(int* const x) {

}

void g(int x[]) {

}

int main() {
	int a = 2; // best style, always initialize
	int* p = &a; // "address of a" p points to a
	const int* q = &a; //LEGAL
	// q says "I promise NOT to change a"
	a = 4;
	// *q = 5; // Constant
	cout << *q << '\n'; // q is a READ only pointer

	int* const r = &a; // r is a constant int pointer
	*r = 19; //change a
	int b = 4;
	// r = &b // ILLEGAL. r is not allowed to point to anything else

	// arrays are constant pointers
	int x[10] = {5}; // 5 0 0 0 0 0 0 0 0 0

	x[0] = 11; // you can change what is there
	// x = r; // ILLEGAL. Arrays are constant pointers. They may not change where they point

	const int* const s = x; // What is this?
	// s cannot write to the array x
	// s cannot point to anything else

	const int y[10] = {2, 1, 0}; // 2 1 0 0 0 0 0 0 0 0
	// y is also a const int* const pointer



}
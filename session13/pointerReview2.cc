int main() {
	int a[] = {1, 3, 5, 7, 9};		// this is ok
	const in b[9] = {5, 4, 3, 1};	// this is ok. pads with zero
	const int c[4] = {5, 4, 3, 2, 1}; // error. overloading array
	const int* p1 = a;	// this is ok
	// p1 promises it won't change a

	const int* p2 = &a[1]; // this is ok
	int* const p3 = &a[2];	// points to 5 in array a
	*p3 = 11; // changes 5 to 11
	const int* const p4 = a + 4; // this is ok
	// points to 9
	// ILLEGAL:		*p4 = 55; // can't write to p4
	// ILLEGAL:		p4++;	// p4 cannot change
	p1 = b + 2;	// this is ok
	// you can point to something new but can't change b
	// ILLEGAL: p1 is readonly  *p1 = 55;
	p2 = p1 + 1; // ILLEGAL
	p3 = p2 - 1;
	cout << *p1 << '\n';
	cout << *p2 << '\n';
	cout << *p3 << '\n';




}
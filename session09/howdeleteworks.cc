class Elephant {
private:
	int* p;	// pretend p gets allocated
public:
	Elephant() {cout << "Elephant born"; }
	~Elephant() { cout << "Elephant about to die"; }

};



int main() {
	/*			
				4 bytes
		p -->	int

				400 bytes
		q -->	int int int int ....

				800 bytes
		e -->	E E E E E E E E E

	*/



	int* p = new int;
	*p = 5;

	int *q = new int[100];
	delete [] q;

	Elephant* e = new Elephant;
	delete e;

	e = new Elephant[100];
	delete e;	// incorrectly deletes only the first elephant
				// does not know that there are 99 other elephants
	delete [] e;	// calls destructor correct number of times

}
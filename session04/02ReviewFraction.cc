class Fraction {
private:
	int num, den;
public:
	Fraction(int num, int den) : num(num), den(den) {}
	Fraction(int num) : num(num), den(1) {}
	Fraction() : num(0), den(1) {}
};

int main() {
	Fraction x(1,2);	// this would use the first constructor
	Fraction y(3);		// this would use the second constructor
	Fraction z(); 		// this is wrong
	Fraction w;			
	// Illegal: num is private 		w.num = 5;
	z.num = 9;

}
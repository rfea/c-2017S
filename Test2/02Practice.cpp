#include <iostream>

class calculator {
private:
	double firstNumber;
	double secondNumber;
protected:
	static int numberCalcs;
public:
	calculator(double first = 0, double second = 0) : firstNumber(first), secondNumber(second) {}

	static int getNumCalcs() {
		return numberCalcs;
	}

	virtual double getResult() = 0;
};

class add : public calculator {
private:
	double result;
public:
	add(double first, double second) : calculator(first, second), result(first + second) {
		numberCalcs++;
	}

	double getResult() {
		return result;
	}
};

class mult : public calculator {
private:
	double result;
public:
	mult(double first, double second) : calculator(first, second), result(first * second) {
		numberCalcs++;
	}

	double getResult() {
		return result;
	}
};

int calculator::numberCalcs = 0;

int main() {
	add c1(2, 5);

	std::cout << c1.getResult() << std::endl;
	std::cout << c1.getNumCalcs() << std::endl;

	mult c2(2, 5);
	std::cout << c2.getResult() << std::endl;
	std::cout << c2.getNumCalcs() << std::endl;


}
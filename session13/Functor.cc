using namespace std;

class F {
public:
	double operator
}

double f(double x) { return x*x; } // integrate(f, 0, 1) = 1/3

typedef double (*FuncOneVar)(double x); //there is a pointer to function

// f -> give a pointer to code
double euler(FuncOneVar f, double a, double b, double n) {
	double sum = 0;
	int n = 16;
	double h = (b - a) / n;

	int i;
	for (i = 0, x = a; i <= n; x+= h, i++) {
		sum += f(x);
	}
	return sum * h;
}

template<typename Func>
double euler2(FuncOneVar f, double a, double b, double n) {
	double sum = 0;
	int n = 16;
	double h = (b - a) / n;

	int i;
	for (i = 0, x = a; i <= n; x+= h, i++) {
		sum += f(x);
	}
	return sum * h;
}


int main() {
	cout << setprecision(15) << euler(f, 0, 1, 1000000000) << '\n';
	cout << setprecision(15) << euler(f, 0, 1, 1000000000) << '\n';

}
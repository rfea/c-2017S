/*
HW8 - Matrix

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangiarella and John Martin.
*/

#include <iostream>

class Matrix {
private:
	double* m; // points to a single vector of double...
	int rows, cols;

public:
	// write constructor, destructor, copy constructor, operator =
	Matrix(int rows, int cols, double val = 0) : rows(rows), cols(cols) {
		m = new double[rows * cols];

		for (int i = 0; i < rows * cols; i++) {
			m[i] = val;
		}
	}

/*
	Matrix(Matrix&& orig) {	// move function = &&
		m = orig.m;
		rows = orig.rows;
		cols = orig.cols;
		orig.m = nullptr;
	}
*/

/*
	// with move constructor, function below will no longer make a copy
	friend Matrix operator +(const Matrix& a, const Matrix& b) {	
		// test if the two matrices are equal in size!!!
		Matrix ans(....);
		return ans;
	}
*/
/*
	can't pass answer by reference since Matrix will only exist within function
	friend Matrix& operator +(const Matrix& a, const Matrix& b) {
		Matrix ans(....);
		return ans;
	}
*/

	friend std::ostream& operator <<(std::ostream& s, Matrix mat) {	
		for (int i = 0; i < mat.rows; i++) {
			for (int j = 0; j < mat.cols; j++) {
				s << mat.m[i * mat.cols + j] << ' ';
			}
			s << std::endl;
		}
		return s;
	}

	double operator () (int i, int j) const {	// just look, don't touch
		return m[i * cols + j];
	}

	double& operator () (int i, int j) {	// can write 
		return m[i * cols + j];
	}

	friend Matrix operator +(Matrix& a, Matrix& b) {
		if (a.rows == b.rows && a.cols == b.cols) {
			Matrix add(a.rows, a.cols);
			for (int i = 0; i < add.rows * add.cols; i++) {
				add.m[i] = a.m[i] + b.m[i];
			}
			return add;
		}
		else {
			std::cout << "Not the same size" << std::endl;
		}
	}

/*
	Matrix(Matrix&& orig) : rows(orig.rows), cols(orig.cols) {	// move function = &&
		m = new double [rows * cols];
		m = orig.m;
		//rows = orig.rows;
		//cols = orig.cols;
		
		for (int i = 0; i < rows * cols; i++) {
			m[i] = orig[i];
		}
		
		orig.m = nullptr;
	}
*/

	Matrix& operator =(const Matrix& orig) {
		if (this != &orig) {
			delete [] m;

			m = new double[orig.rows * orig.cols];

			for (int i = 0; i < orig.rows * orig.cols; i++) {
				m[i] = orig.m[i];
			}
		}

		return *this;
	}


/*


	friend Matrix operator =(Matrix a, Matrix b) {
		if (a.rows == b.rows && a.cols == b.cols) {
			Matrix copy(a.rows, a.cols);
			for (int i = 0; i < copy.rows * copy.cols; i++) {
				copy.m[i] = b.m[i];
			}
			return copy;
		}
		else {
			std::cout << "Not the same size" << std::endl;
		}
	}
*/


};

int main() {
	Matrix m1(3, 4);	// fills with zeros
	Matrix m2(2, 3, 1.5); // fill with 1.5

	std::cout << "m1" << '\n' << m1 << '\n';
	/* 
		0  0  0  0
		0  0  0  0
		0  0  0  0
	*/

	std::cout << "m1(0,1)" << '\n' << m1(0, 1) << '\n' << '\n';

	/* 		
	i * cols + j	
		--> 0  0  0  0
		 	0  0  0  0
			0  0  0  0
	*/

	m1(0, 1) = 5.5;
	std::cout << "m1" << '\n' << m1 << '\n';


	Matrix m3 = m1 + m1;
	std::cout << "m3" << '\n' << m3 << '\n';


	Matrix m4 = m3;		// copy constructor
	std::cout << "m4" << '\n' << m4 << '\n';

	m4(1, 2) = 11.2;
	std::cout << "m4" << '\n' << m4 << '\n';

	m3 = m4;	 // operator =
	std::cout << "m3" << '\n' << m3 << '\n';

}
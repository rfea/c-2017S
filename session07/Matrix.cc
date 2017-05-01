

class Matrix {
private:
	double* m; // points to a single vector of double...

public:
	// write constructor, destructor, copy constructor, operator =
	Matrix(int rows, int cols)

	double operator () (int i, int j) const {	// just look, don't touch
		return m[_____];
	}

	double& operator () (int i, int j) {	// can write 
		return m[_____];
	}

	Matrix(Matrix&& orig) {	// move function = &&
		m = orig.m;
		rows = orig.rows;
		cols = orig.cols;
		orig.m = nullptr;

	}

	// with move constructor, function below will no longer make a copy
	friend Matrix operator +(const Matrix& a, const Matrix& b) {	
		// test if the two matrices are equal in size!!!
		Matrix ans(....);
		return ans;
	}

/*
	can't pass answer by reference since Matrix will only exist within function
	friend Matrix& operator +(const Matrix& a, const Matrix& b) {
		Matrix ans(....);
		return ans;
	}
*/
};

int main() {
	Matrix m1(3, 4);	// fills with zeros
	Matrix m2(2, 3, 1.5) // fill with 1.5

	cout << m1 << '\n';
	/* 
		0  0  0  0
		0  0  0  0
		0  0  0  0
	*/

	cout << m1(0, 1) << '\n';

	/* 		
	i * cols + j	
		--> 0  0  0  0
		 	0  0  0  0
			0  0  0  0
	*/

	m1(0, 1) = 5.5;

	Matrix m3 = m1 + m1;
	Matrix m4 = m3;		// copy constructor
	cout << m4 << '\n';

	m4(1, 2) = 11.2;
	m3 = m4;	 // operator =

}
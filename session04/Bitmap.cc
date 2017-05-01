class Bitmap {
private: 
	int m[1024][1024];	
public:
	operator +(Bitmap a, Bitmap b) {	// copies the matrix which is huge! 

	}

	operator +(const Bitmap& a, const Bitmap& b) { // far more efficient than above by 4 million times

	}
};
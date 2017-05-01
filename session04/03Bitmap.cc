/*

0000000000000000000000000000000000
0000000000000000000000000000000000
0000000011000000000011000000000000
0000000011000000000011000000000000
0000000000000000000000000000000000
0000000000000000000000000000000000
0000000000000000000000000000000000
0000000000011111111100000000000000
0000000000000000000000000000000000
0000000000000000000000000000000000

*/

class Bitmap {
private:
	enum { ROWS = 30, COLS = 40 };
	int a[ROWS][COLS];
public:
	Bitmap() {
		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLS; j++) {
				a[i][j] = 0;
			}
		}
	}
};

int main() {
	Bitmap b1;
	const Bitmap b2(3);
	// no sizes yet... Bitmap b3(100, 200); // a bit ambitious for now
	b2.horizLine(5, 1, 27);	// row = 5, col 1 to 27
	b2.vertLine(19, 5, 20);	// col 19, row 5 to 20
	b2.rect(9, 9, 5, 8);	//x = 9, y = 9, w = 5, h = 8
	b2.line(28, 7, 8, 25);	// diagonal line using Bresenham
	cout << b2;
}
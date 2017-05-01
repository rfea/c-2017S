/*
HW4 - Bitmap

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangiarella and John Martin.
Bresenham Line Algorithm from:
http://www.etechplanet.com/codesnippets/computer-graphics-draw-a-line-using-bresenham-algorithm.aspx
*/

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



#include <iostream>
#include <math.h>
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>

class Bitmap {
private:
	enum { ROWS = 30, COLS = 40 };
	int a[ROWS][COLS];
public:
	/*Bitmap() {
		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLS; j++) {
				a[i][j] = 0;
			}
		}
	}
	*/

	Bitmap(int x) {
		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLS; j++) {
				a[i][j] = x;
			}
		}
	}

	friend std::ostream& operator <<(std::ostream& s, Bitmap b) {
		for (int i = 0; i < b.ROWS; i++) {
			for (int j = 0; j < b.COLS; j++) {
				s << b.a[i][j];
			}
			s << std::endl;
		}
		return s;
	}

	void horizLine(int row, int col1, int col2, int val) {
		for (int i = col1; i <= col2; i++) {
			a[row][i] = val;
		}
	}

	void vertLine(int col, int row1, int row2, int val) {
		for (int i = row1; i <= row2; i++) {
			a[i][col] = val;
		}		
	}

	void rect(int col, int row, int width, int height, int val) {
		for (int i = col; i < col + width; i++) {
			for (int j = row; j < row + height; j++) {
				a[i][j] = val;
			}
		}

		/*
		// left line of rectangle
		for (int i = col; i < (col + height); i++) {
			a[i][col] = val;
		}
		
		// right line of rectangle
		for (int i = col; i < (col + height); i++) {
			a[i][col + width - 1] = val;
		}
		
		// Top line of square
		for (int i = row; i < (row + width); i++) {
			a[row][i] = val;
		}

		// bottom line of rectangle
		for (int i = row; i < (row + width); i++) {
			a[row + height - 1][i] = val;
		}
		*/
	}

	void line(int x1, int y1, int x2, int y2, int c) {
		int x, y, dx, dy, dx1, dy1, px, py, xe, ye, i;
		dx = x2 - x1;
		dy = y2 - y1;
		dx1 = fabs(dx);
		dy1 = fabs(dy);
		px = 2*dy1 - dx1;
		py = 2*dx1 - dy1;

		if(dy1 <= dx1) {
			if(dx >= 0) {
				x = x1;
				y = y1;
				xe = x2;
			}
			else {
				x = x2;
				y = y2;
				xe = x1;
			}
		
			putpixel(x, y, c);

			for(i = 0; x < xe; i++) {
				x = x + 1;
				if(px < 0) {
					px = px + 2 * dy1;
				}
				else {
					if((dx < 0 && dy < 0) || (dx > 0 && dy > 0)) {
						y = y + 1;
					}
					else {
						y = y - 1;
					}
					px = px + 2 * (dy1 - dx1);
				}

				putpixel(x, y, c);
			}
		}
		else {
			if(dy >= 0) {
				x = x1;
				y = y1;
				ye = y2;
			}
			else {
				x = x2;
				y = y2;
				ye = y1;
			}

			putpixel(x, y, c);

			for(i=0; y < ye; i++) {
				y = y + 1;
				if(py <= 0) {
					py = py + 2 * dx1;
				}
				else {
					if((dx < 0 && dy < 0) || (dx > 0 && dy > 0)) {
						x = x + 1;
					}
					else {
						x = x - 1;
					}
					
					py = py + 2 * (dx1 - dy1);
				}
				putpixel(x, y, c);
			}
		}
	}

	void putpixel(int row, int col, int val) {
		a[row][col] = val;
	}
};

int main() {
	//Bitmap b1;
	Bitmap b2(3);
	// no sizes yet...	Bitmap b3(100,200);
	// each method has a last parameter (color) which is an integer (32-bit)
	b2.horizLine(5, 1, 27, 99); // row=5, col 1 to 27, set every pixel to 99
	b2.vertLine(19, 5, 20, 45); // col 19, row 5 to 20, set every pixel to 45
 	b2.rect(9,9, 5, 8, 205); // x=9, y = 9, w=5, h=8, set every pixel to 205
	b2.line(28, 7, 8, 25, 92); // diagonal line using Bresenham, set every pixel to 92
	std::cout << b2 << std::endl;

}
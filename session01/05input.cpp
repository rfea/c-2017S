#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
	string line;
	double x,y,z;
	while (!cin.eof()) {
		getline (cin, line);
		istringstream thisline(line);
		thisline >> x >> y >> z;
		cout << x << "," << y << "," << z << '\n';

	}
	return 0;
}
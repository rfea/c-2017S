/*
HW4b - JulianDate

Made By: Robert Fea

Citation: I worked with Joe Testa, Brian Silver, Vin Cangiarella and John Martin.
*/


/*
	365 days in a year
	LEAP YEAR: any year divisible by 4 --> LEAP
	EXCEPT:   if year divisible by 100 --> NOT LEAP
	EXCEPT:   if year divisible by 400 --> LEAP
	year = 365.2425 days
	2000 LEAP
	2004 LEAP
	2100 NOT LEAP
	J2000 = Jan. 1, 2000 = 0
	Jan. 2, 2000 = 1
	Jan. 3, 2000 = 2
https://en.wikipedia.org/wiki/Julian_day
http://aa.usno.navy.mil/faq/docs/JD_Formula.php
Look it up, cite it, feel free to use it.  Just make it object oriented.
 */
#include <iostream>
#include <cmath>

class JulianDate {
private:
	double jday;
public:
	JulianDate (int year, int month, int day, int hour = 0, int minute = 0, int second = 0) : jday(JD(year, month, day, hour, minute, second)) {}

	JulianDate (double date) : jday(date) {}

	// conversion to Julian Date
	double JD(int year, int month, int day, int hour, int min, int sec) {
		int I = year;
		int J = month;
		double K = day + - 0.5 + hour / 24.0 + min / (24.0 * 60.0) + sec / (24.0 * 60.0 * 60.0);
		double JDay = K - 32075 + 1461 * (I + 4800 +(J - 14) / 12) / 4 + 367 * (J - 2 -(J - 14) / 12 * 12) / 12 - 3 * ((I + 4900 + (J - 14) / 12) / 100) / 4;
		JDay -= 2451544.5;
		std::cout << "jday is: " << JDay << std::endl;
		return JDay;
	}

	// conversion to regular date/time 
	void gday(int& year, int& month, int& day, int& hour, int& min, int& sec) const {
		//cout << jday << endl;
		double JD = jday;
		//cout << JD << endl;
		JD += 2451544;
		//cout << JD << endl;
		int JDint = JD;

		double JDdecimals = JD - JDint;
		//cout << JDdecimals << endl;
		JD += 1;
        int L = JD + 68569;
        int N = 4 * L / 146097;
        L= L - (146097 * N + 3) / 4;
        int I = 4000 * (L + 1) / 1461001;
        L = L - 1461 * I / 4 + 31;
        int J = 80 * L / 2447;
        int K = L - 2447 * J / 80;
        L = J / 11;
        J = J + 2 - 12 * L;
        I = 100 * (N - 49) + I + L; 
		year = I;
		month = J;
		day = K;

		int JDdecimals2 = round(JDdecimals * 24 * 60 * 60);
		//cout << JDdecimals2 << endl;
		hour = JDdecimals2 / 3600;
		min = (JDdecimals2 % 3600) / 60;
		//cout << (JDdecimals2%3600) << endl;
		sec = (JDdecimals2 % 3600) % 60;

		//cout << year << ' ' << month << ' ' << day << ' ' << hour << ' ' << min << ' ' << sec << endl;
	}

	int getYear() const {
		int year, month, day, hour, min, sec;
		gday(year, month, day, hour, min, sec);
		return year;
	}

	int getMonth() const {
		int year, month, day, hour, min, sec;
		gday(year, month, day, hour, min, sec);
		return month;
	}

	int getDay() const {
		int year, month, day, hour, min, sec;
		gday(year, month, day, hour, min, sec);
		return day;
	}

	int getHour() const {
		int year, month, day, hour, min, sec;
		gday(year, month, day, hour, min, sec);
		return hour;
	}

	int getMin() const {
		int year, month, day, hour, min, sec;
		gday(year, month, day, hour, min, sec);
		return min;
	}

	int getSec() const {
		int year, month, day, hour, min, sec;
		gday(year, month, day, hour, min, sec);
		return sec;
	}

	friend std::ostream& operator <<(std::ostream& s, JulianDate regTime) {
		int year, month, day, hour, min, sec;
		regTime.gday(year, month, day, hour, min, sec);
		return s << year << ' ' << month << ' ' << day << ' ' << hour << ' ' << min << ' ' << sec;
	}
	
	friend double operator +(JulianDate a, int b) {
		return a.jday + b;
	}

	friend double operator -(JulianDate a, JulianDate b) {
		return a.jday - b.jday;
	}
};

int main() {
	const JulianDate d1(2017, 2, 13, 20, 00, 00);
	const JulianDate d1b(2017, 2, 13, 22, 00, 00);

	std::cout << d1b - d1 << '\n'; // 2 hours = 2/24 day

	const JulianDate tomorrow = d1 + 1;
	std::cout << tomorrow << '\n'; // 2017 2 14 20 00 00
	std::cout << tomorrow - d1 << '\n';
	// hh:mm:ss  20/24  20/24.0

	const JulianDate d2(2017, 2, 19); // 00:00:00
	const JulianDate d3 = d2 + 3; // what is it 3 days later?
	double days = d3 - d1;

	int year = d3.getYear();
	int month = d3.getMonth();
	int day = d3.getDay();
	int hour = d3.getHour();
	int min = d3.getMin();
	int sec = d3.getSec();
	
	std::cout << d1 << '\n';
	std::cout << d2 << '\n';
	std::cout << d3 << '\n';
	std::cout << year << " " << month << " " << day << ' ' << hour << " " << min << " " << sec << '\n';
	// Not every operation makes sense!
	//	JulianDate d5 = d3 * d1;

	JulianDate torture(2017, 2, 27); // 00:00:00
	for (int i = 0; i < 3; i++) {
		std::cout << torture.getYear() << " " << torture.getMonth() << " " << torture.getDay() << '\n';
		torture = torture + 1;
	}
}
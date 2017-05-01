#include <iostream>
#include <string>

class phoneBook {
private:
	std::string firstName;
	std::string lastName;
	unsigned long long phoneNumber;
	static int count;
public:
	phoneBook(const std::string& fName = "John", const std::string& lName = "Smith", const unsigned long long number = 0) 
	: firstName(fName), lastName(lName), phoneNumber(number) {
		count++;
	}
	~phoneBook() {
		count--;
	}
/*
	virtual std::ostream& operator << (std::ostream& s, const phoneBook& p) {
		return s << p.firstName << " " << p.lastName << " " << p.phoneNumber;
	}
*/
	//virtual friend std::ostream& operator << (std::ostream& s, const phoneBook& p) = 0;

	std::string getFirst() {
		return firstName;
	}

	int getTheCount() {
		return count;
	}

	static int getCount() {
		return count;
	}

	static int getACount();
};

class family : public phoneBook {
private:
	std::string relation;
public:
	family(const std::string& fName = "John", const std::string& lName = "Smith", unsigned long long number = 0, const std::string& relate = "family") 
	: phoneBook(fName, lName, number), relation(relate) {}
/*
	friend std::ostream& operator << (std::ostream& s, const family& p) {
		return s << p.relation;
	}
*/	

};

int phoneBook::count = 0;

int phoneBook::getACount() {
	return count;
}

int main() {
	phoneBook JohnDoe;
	phoneBook Robert("Robert", "Fea", 7328148308);

	std::cout << Robert << std::endl;
	std::cout << Robert.getFirst() << std::endl;
	std::cout << Robert.getTheCount() << std::endl;
	std::cout << phoneBook::getCount() << std::endl;
	std::cout << phoneBook::getACount() << std::endl;

	family Mom("Eileen", "Fea", 123456789);
	std::cout << Mom << std::endl;
	std::cout << phoneBook::getCount() << std::endl;

	family Dad("Tony", "Fea", 987654321);
	std::cout << Dad << std::endl;
	std::cout << phoneBook::getCount() << std::endl;

}
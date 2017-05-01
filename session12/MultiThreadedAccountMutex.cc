#include "AccountMutex.hh"
#include <thread>

AccountMutex a;

void deposits(int n) {
	for (int i = 0; i < 1000000; i++) {
		a.deposit(1);
	}
}

void withdrawals(int n) {
	for (int i = 0; i < 5000000; i++) {
		a.withdraw(1);
	}
}


int main() {
	const int n = 10000000	// 10,000,000
	thread t1(deposits, n);
	thread t2(withdrawals, n);	
	t1.join();
	t2.join();


	cout << a << '\n';
}
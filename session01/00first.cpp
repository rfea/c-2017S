#include <iostream>
#include <cstdint>
using namespace std; 

int x = 0; // global variables are always intialized to binary zero

int main(){
    cout << "hello";
    int a = 1;
    short int b = 2;
    long c; // variables on the stack (auto) are unitialized, RANDOM
    long long d;
    unsigned int e = 2;
    char f;
    
    for (int32_t i = 0; i < 100000; i++)    // int32_t makes C++ portable like Java and will work on arduino
        ;
    
    cout << 3 * 4 << '\n'; // 3*4 done first, the prints 12, then enters to start a new line
    cout << 3 + 4 << '\n';
    cout << 3 - 4 << '\n'; // int is signed so it would print -1
    cout << 3 / 4 << '\n'; // will print out 0 since 3/4 is not an integer
    cout << 3 % 4 << 4 % 4 << 5 % 4 << 6 % 4 << '\n'; // prints 3,0,1,2
    cout << -3 % 4 << -4 % 4 << -5 % 4 << -6 % 4 << '\n'; // prints -3,0,-1,-2
    
    cout << 2 + 3 * 4 << '\n';  // order of operations = 14
    cout << 2 / 3 * 3 + 1 / 2 * 2 << '\n';  // answer is 0
    cout << 2 * 3 / 3 + 1 * 2 / 3 << '\n';  //
    
    
}

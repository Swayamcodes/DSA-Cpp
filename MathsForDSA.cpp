#include <iostream>
#include <cmath>    // For mathematical functions like sqrt, pow, log
using namespace std;

string isPrime (int n) {
    for ( int i = 2; i*i <=n ; i++) {
        if ( n % i == 0) {
            return "Not Prime";
        } 

    }
    return "Prime";
}


int main()  {
    int n = 42;
    
    isPrime(n);
    cout << isPrime(n) << endl;
    return 0;
}
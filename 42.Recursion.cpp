#include <iostream>
using namespace std;

void printNum(int n) {
    //base case
    if(n==1) {
        cout << 1;
        return;
    }
    cout<<n<<endl;
    printNum(n-1); //recursive call
}

int fact(int n) {
    if ( n == 0 ) 
        return 1;
        
        return n * fact(n-1);
}

int Sum(int n) {
    if ( n == 1 ) 
        return 1;
        
        return n + Sum(n-1);
}

int main() {
    printNum(5);
    //Recursion
    cout << "Factorial of 5 is " << fact(5) << endl;
    cout << "Sum of first 5 natural numbers is " << Sum(5) << endl;

    return 0;
}

// g++ -std=c++14 42.Recursion.cpp && ./a.out
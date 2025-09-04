#include <iostream>
using namespace std;

void printNum(int n) {
    //base case
    if(n==1) {
        cout << 1;
        return;
    }
    cout<<n<<endl;
    func(n-1); //recursive call
}

int fact(int n) {
    if ( n == 0 ) 
        return 1;
        
        return n * fact(n-1);
}

int main() {
    printNum(5);
    //Recursion
    cout << "Factorial of 5 is " << fact(5) << endl;a

    return 0;
}
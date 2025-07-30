#include <iostream>
using namespace std;

// return_type name() {
//     // Function body
// }

// // Defining function that prints hello
// void printHello(){
//     cout << "Hello Swayam";
// }

// int main() {  //arguments are the values passed in functions and parameters are representation or a copy of it.
    
//     // Calling function fun
//     printHello();
//     return 0;
    

// };

int nFactorial(int n) {
    int fac = 1;

    for ( int i=1; i<=n; i++)
    {
        fac *= i;
    }
    return(fac);
};

int sumOfDigits( int num ) {
    int digSum = 0;
    while ( num > 0 )
    {
        int lasDig = num % 10;
        num /= 10;
        digSum += lasDig;

    }
    return digSum;
}

int decToBinary(int decNum) {
    int ans = 0; int pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main() {
    int decNum = 50;
    cout << nFactorial(5) << endl;
    cout << sumOfDigits(231234) << endl;
    cout << decToBinary(decNum);

    return 0;
}
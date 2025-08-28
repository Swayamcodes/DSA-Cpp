#include <iostream>
#include <cmath>    // For mathematical functions like sqrt, pow, log
using namespace std;

// string isPrime (int n) {
//     for ( int i = 2; i*i <=n ; i++) {
//         if ( n % i == 0) {
//             return "Not Prime";
//         } 

//     }
//     return "Prime";
// }


// int main()  {
//     int n = 42;
    
//     isPrime(n);
//     cout << isPrime(n) << endl;
//     return 0;
// } 

//Seive of Eratosthenes to print all prime numbers up to n
// class Solution { Leetcode 204
// public:
//     int countPrimes(int n) {
//         vector<bool> isPrime(n + 1, true);
//         int count = 0;
//         for (int i = 2; i < n; i++) {
//             if (isPrime[i]) {
//                 count++;
//             }
//             for ( int j = i * 2; j < n; j = j + i) {
//                 isPrime[j] = false;
//             }
//         }
//         return count;
//     }
    
// };


void printDigits(int n) {
    int count = 0;
    while (n != 0)
    {
        int digit = n % 10; 
        count++;
        cout << digit << endl;
        n = n / 10;
    }
    cout << count << endl;
}

bool isArmstrong(int n) {
    int copyN = n;
    int sumOfCubes = 0;

    while (n != 0) {
        int dig = n % 10;
        sumOfCubes += (dig * dig * dig);
        n = n / 10;
    }
    return sumOfCubes == copyN;
}

// Euclidean Algorithm to find GCD
int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    if (a == 0) {
        return b;
    } else {
        return a;
    }

}


int main () {
    intn = 64732;

    printDigits(n);
    return 0;
}
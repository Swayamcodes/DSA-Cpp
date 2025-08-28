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
    cout << gcd(48, 18) << endl;
    cout << isArmstrong(153) << endl;
    printDigits(n);
    return 0;
}

// Reverse Integer Leetcode 7
// class Solution {
// public:
//     int reverse(int n) {
//         int revNum = 0;
//         while ( n!= 0 ) {
//             int dig = n%10;
//             if (revNum > INT_MAX/10 || revNum < INT_MIN/10) {
//                 return 0;
//             }
//             revNum = revNum*10 + dig;
//             n = n/10; 
//         }
//         return revNum;
//     }
// };

// Palindrome Number Leetcode 9
// class Solution {
// public: 
//     bool isPalindrome(int x) {
//         if (x < 0) return false;
//         int original = x;
//         int revNum = 0; 
//         while ( x!= 0 ) {
//             int dig = x%10;
//             if (revNum > INT_MAX/10 || revNum < INT_MIN/10) {
//                 return false;            
//             }
//             revNum = revNum*10 + dig;
//             x = x/10;
//         }
//         return revNum == original;
//     }
// };
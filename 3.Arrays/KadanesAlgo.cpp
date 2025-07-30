#include <iostream>
#include <vector>
using namespace std;

// int main() { // printing all possible subbarrays
//     int sz = 5;
//     int arr[sz] = {1, 2, 3, 4 ,5};
    

//     for (int st = 0; st < sz; st++)
//     {
//         for (int end = st; end < sz; end++)
//         {
//             for (int i = st; i <= end; i++)
//             {
//                cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main() { //Brute force TC=O(n^2)
//     int sz = 7;
//     int arr[sz] = {3, -4, 5, 4, -1, 7, -8};
//     int maxSum = INT16_MIN;

//     for (int st = 0; st < sz; st++)
//     {
//         int currentSum = 0;
//         for (int end = st ; end < sz; end++)
//         {
//             currentSum += arr[end];
//             maxSum = max(currentSum, maxSum);
//         }
        
//     }
//     cout << "max sum val = " << maxSum << endl;

//     return 0;
// }

int main() { //Kadane's Algo TC=O(n)
    int sz = 7;
    int arr[sz] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT16_MIN;

    int currentSum = 0 ;
        

        for ( int value : arr) {
            currentSum += value;
            maxSum = max(currentSum, maxSum);

            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        return maxSum;

    return 0;
}
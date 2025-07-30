#include <iostream>
using namespace std;
#include <algorithm>

// int main() //BruteForce 
//     int sz = 5;
//     int arr[sz] = {1, 2, 2, 1, 1};

//     for (int i = 0; i < sz; i++) {
//         int freq = 0;
//         for (int el = 0; el < sz; el++) {
//             if (arr[el] == arr[i]) {
//                 freq++;
//             }
//         }
//         if (freq > sz / 2) {
//             cout << "Majority Element: " << arr[i] << endl;
//             return 0;
//         }
//     }

//     cout << "No Majority Element" << endl;
//     return 0;
// }

int main() { //Optimized 
    int sz = 5;
    int arr[sz] = {1, 2, 2, 1, 1};
    sort(arr, arr + sz);

    int freq = 1; int ans = arr[0];

    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = arr[i];
        }
        if (freq > sz / 2)
        {
            cout << ans << endl;
        }
        
    }
    
}

// int main() { //Moores Voting Algorithm
//     int sz = 5;
//     int arr[sz] = {3, 2, 3, 3, 2};
//     int freq = 0; int ans = 0;

//     for (int i = 0; i < sz; i++)
//     {
//         if (freq == 0)
//         {
//             ans = arr[i];
//         }
//         if (ans == arr[i])
//         {
//             freq++;
//         } else {
//             freq--;
//         }
       
//     }
//      cout << ans << endl;

// }

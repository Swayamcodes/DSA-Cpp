#include <iostream>
using namespace std;

// int main() 
// {
//     int marks[5] = {50, 50, 28, 47, 51};
//     marks[0] = 49;
//     cout << marks[0] << endl;
//     cout << sizeof(marks) / sizeof(int) << endl;
//         return 0;
// }

// int main() {
//     int size = 5;
//     int nums[size] = {16, 390 ,-23, 9 , -2};
//     int smallest = INT16_MAX; 
//     int largest = INT16_MIN;
//     // Initialize smallest as the maximum possible value
//     for ( int i = 0; i < size; i++)
//     {
//         // if (nums[i] < smallest)
//         // {
//         //      smallest = nums[i];
//         // }
//         smallest = min(nums[i], smallest);
//         largest = max(nums[i], largest);
//     }
//     cout << smallest << endl;
//     cout << largest << endl;
    
// }


//linear search 
int linearSearch(int arr[], int sz, int target) {
    
    for (int i = 0; i < sz; i++)
    {
        if (target == arr[i])
        {
            return i;
        }
        return -1;
    }
    
}
void reverseArray(int arr[], int sz)
{
    int start = 0, end = sz - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
         end--;
    }
    
}
int main () {
    int arr[] = {4, 23, 43, 5, 23 };
    int sz = 5 ;
    int target = 10;
    cout << linearSearch(arr, sz, target) << endl;

    reverseArray(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << endl;
    }
    
}


#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target) {
    int st = 0, end = arr.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (target < arr[mid]) {
            end = mid - 1;
        } else if (target > arr[mid]) {
            st = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    int target1 = 5;
    vector<int> arr2 = {6, 7, 8, 9};
    int target2 = 6;

    int result1 = binarySearch(arr1, target1);
    int result2 = binarySearch(arr2, target2);

    cout << "Index of " << target1 << " in arr1: " << result1 << endl;
    cout << "Index of " << target2 << " in arr2: " << result2 << endl;

    return 0;
}

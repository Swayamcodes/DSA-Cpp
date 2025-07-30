#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];       // current element to be placed
        int j = i - 1;

        // Shift elements of the sorted part that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // move element one step right
            j--;
        }

        arr[j + 1] = key; // place key in correct position
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}

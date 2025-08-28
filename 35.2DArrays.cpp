#include <iostream>
#include <cmath>    // For mathematical functions like sqrt, pow, log
using namespace std;

// int main() {
//     int arr[10];

//     int matrix[4][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9},
//         {10, 11, 12}
//     };
//     int rows = 4;
//     int cols = 3;

//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << matrix[i][j] << endl;
//         }
//     }
// }

// Linear Search in 2D Array

bool linearSearch(int matrix[][3], int rows, int cols, int target) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target) {
                cout << "Element found at index: (" << i << ", " << j << ")" << endl;
                return true;
            }
        }
    }
    cout << "Element not found" << endl;
    return false; 
}

int main() {
    int mat[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
    int rows = 4;
    int cols = 3;
    int target = 7;
}
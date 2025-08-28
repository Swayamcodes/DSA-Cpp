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

int getMaxSum(int matrix[][3], int rows, int cols) {
    int maxSum = INT_MIN;
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        maxSum = max(maxSum, rowSum);
    }
    return maxSum;
}

int maxColSum(int matrix[][3], int rows, int cols) {
    int maxSum = INT_MIN;
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        maxSum = max(maxSum, colSum);
    }
    return maxSum;
}

int diagonalSum(int mat2[][3], int n) {
    int sum = 0;
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n ; j++) {
          if (i == j) {
              sum += matrix[i][j];
          } else if ( j == n - i - 1) {
              sum += matrix[i][j];
          }
    }
    return sum;
}
};




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

    int mat2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    linearSearch(mat, rows, cols, target);
    cout << "Maximum row sum is: " << getMaxSum(mat, rows, cols) << endl;
    cout << "Maximum column sum is: " << maxColSum(mat, rows, cols) << endl;
    cout << "Diagonal sum is: " << diagonalSum(mat2, 3) << endl;
    return 0;
}
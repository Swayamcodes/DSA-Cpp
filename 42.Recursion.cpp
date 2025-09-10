#include <iostream>
#include <vector>
using namespace std;

void printNum(int n) {
    //base case
    if(n==1) {
        cout << 1;
        return;
    }
    cout<<n<<endl;
    printNum(n-1); //recursive call
}

int fact(int n) {
    if ( n == 0 ) 
        return 1;
        
        return n * fact(n-1);
}

int Sum(int n) {
    if ( n == 1 ) 
        return 1;
        
        return n + Sum(n-1);
}

bool isSorted(int arr[], int n) {
    //base case
    if ( n == 0 || n == 1 ) 
        return true;
        
        return arr[n-1] > arr[n-2] && isSorted(arr, n-1);
}

//Print all subarrays of an array using recursion


void printSubarrays(vector<int> &arr, vector<int> &ans, int i) {
    //base case
    if ( i == arr.size()) {
        for (int val : ans) {
            cout << val << " ";
        }
        cout << endl;
        return;
    }
    //include
    ans.push_back(arr[i]);
    printSubarrays(arr, ans, i+1);

    ans.pop_back(); //backtrack
    //exclude
    printSubarrays(arr, ans, i+1);
   
}

// Subarrays of an array of size n = 2^n

void printSubarrays2(vector<int> &arr, int n) {
    for ( int i = 0; i < (1<<n); i++) {
        for ( int j = 0; j < n; j++) {
            if ( i & (1<<j)) {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

//Merge Sort 
void Merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
    for ( int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for ( int j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }

    int i = 0, j = 0, k = l;
    while ( i < n1 && j < n2) {
        if ( L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while ( i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while ( j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[], int l, int r) {
    if ( l < r ) {
        int m = l + (r - l) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        Merge(arr, l, m, r);
    }
}



int main() {
    printNum(5);
    //Recursion
    cout << "Factorial of 5 is " << fact(5) << endl;
    cout << "Sum of first 5 natural numbers is " << Sum(5) << endl;
    int arr[5] = {1,2,3,4,5};
    cout << "Is Sorted: " << isSorted(arr, 5) << endl;
    vector<int> arr2 = {1,2,3};
    vector<int> ans;
    printSubarrays(arr2, ans, 0);

    MergeSort(arr, 0, 4);

    return 0;
}

// g++ -std=c++14 42.Recursion.cpp && ./a.out





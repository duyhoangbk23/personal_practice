#include <iostream>
using namespace std;
/*
Consider n-element array, a,where each index  in the array contains a reference to an array of k_i integers (where the value of  varies from array to array). See the Explanation section below for a diagram.

Given , you must answer  queries. Each query is in the format i j, 
where  denotes an index in array a and j denotes an index in the array located at a[i]
For each query, find and print the value of element  in the array at location a[i]  on a new line.
Click here to know more about how to create variable sized arrays in C++.
*/ 
int main() {
    int n, q;
    cin >> n >> q;

    int* arr[n];       // array of int* (each points to a subarray)
    int sizes[n];      // store lengths of each subarray

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        sizes[i] = k;
        arr[i] = new int[k];   // dynamically allocate memory
        for (int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        cout << arr[x][y] << endl;
    }

    // free allocated memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }

    return 0;
}

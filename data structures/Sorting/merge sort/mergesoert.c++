#include <iostream>
using namespace std;

// Function to merge two subarrays of arr[]
// First subarray is arr[l..mid]
// Second subarray is arr[mid+1..r]
void merge(int arr[], int l, int mid, int r) {


    int an = mid - l + 1;//size of a
    int bn = r - mid;// size of b

    // Create temporary arrays |_|_|_|_|_|_|_|_|
                       //     |---a-----|---b----|
    int a[an], b[bn];

    // Copy data to temporary arrays a[] and b[]
    for (int i = 0; i < an; i++) {
        a[i] = arr[l + i];
    }
    for (int j = 0; j < bn; j++) {
        b[j] = arr[mid + 1 + j];
    }

    // Merge the temporary arrays back into arr[l..r]
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = l; // Initial index of merged subarray

    while (i < an && j < bn) {
        if (a[i] <= b[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
        }
    }

    // Copy the remaining elements of a[], if there are any
    // if a array gets traversed completely , the functin will come out of the loop and hence elements of array b will not get included
    while (i < an) {
        arr[k++] = a[i++];
    }

    // Copy the remaining elements of b[], if there are any
    while (j < bn) {
        arr[k++] = b[j++];
    }
}

// Function to sort an array using merge sort algorithm
void mergeSort(int arr[], int l, int r) {
    if (l >= r) {
        return; // Base case: if the array contains 1 or 0 elements, it is already sorted
    }

    int mid = (l + (r - l) / 2); // Avoid overflow for large l and r=(r+1)/2
    mergeSort(arr, l, mid); // Sort the first half
    mergeSort(arr, mid + 1, r); // Sort the second half
    merge(arr, l, mid, r); // Merge the sorted halves
}

int main() {
    int arr[] = {10, 28, 23, 6, 33, 18, 37, 46};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n-1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
 
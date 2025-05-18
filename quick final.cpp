#include<iostream>
using namespace std;

int partition(int A[], int l, int h) {
    int pivot = A[l];
    int i = l;
    int j = h;

    while (i < j) {
        while (A[i] <= pivot && i < h) {
            i++;
        }
        while (A[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(A[i], A[j]);
        }
    }
    swap(A[l], A[j]);
    return j;
}

// Function to perform QuickSort
void Quicksort(int A[], int l, int h) {
    if (l < h) {
        int j = partition(A, l, h);
        Quicksort(A, l, j - 1);
        Quicksort(A, j + 1, h);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int A[n]; // Array to store user input

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];  // Taking input from user
    }

    // Calling QuickSort
    Quicksort(A, 0, n - 1);

    // Output sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}



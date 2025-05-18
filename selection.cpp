
#include <iostream>
#include <vector>
using namespace std;

// Selection sort function
void selectionSort(vector<int>& array) {
    int size = array.size();

    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;

        for (int i = step + 1; i < size; i++) {
            if (array[i] < array[min_idx]) {
                min_idx = i;
            }
        }

        // Swap the found minimum element with the first element
        int temp = array[step];
        array[step] = array[min_idx];
        array[min_idx] = temp;
    }
}


int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    vector<int> data(size);
    cout << "Enter " << size << " integer elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> data[i];
    }

    selectionSort(data);

    cout << "Sorted Array in Ascending Order:" << endl;
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}






































































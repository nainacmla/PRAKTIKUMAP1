#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        swap(arr[i], arr[max_idx]);
    }
}

int main() {
    int data[] = {21, 83, 42, 11, 10, 9, 3, 20, 102, 27, 15, 92, 2};
    int size = sizeof(data) / sizeof(data[0]);
    selectionSort(data, size);

    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
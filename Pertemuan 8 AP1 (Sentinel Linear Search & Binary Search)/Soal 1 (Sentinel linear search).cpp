#include <iostream>
using namespace std;

// berfungsi untuk melakukan pencarian linear search
int sentinelSearch(int arr[], int size, int target) {
    int lastValue = arr[size - 1];
    arr[size - 1] = target;
    int i = 0;
    while (arr[i] != target)
        i++;
    arr[size - 1] = lastValue;
    if (i < size - 1 || arr[size - 1] == target)
        return i; // Elemen ditemukan di index i
    else
        return -1; // Elemen tidak ditemukan
}

int main() {
    int arr[] = {3, 5, 2, 8, 9, 4};
    int target = 8;
    int result = sentinelSearch(arr, 6, target);
    if (result != -1)
        cout << "Elemen ditemukan di index" << result << endl;
    else
        cout << "Elemen tidak ditemukan" << endl;
    return 0;
}

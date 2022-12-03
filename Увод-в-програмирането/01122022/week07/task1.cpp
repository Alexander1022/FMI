#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void reverseArray(int *arr, const int size) {
    for(int i = 0 ; i < size / 2 ; i ++) {
        swap(*(arr + i), *(arr + size - 1 - i));
    }
}

void printArray(int *arr, const int size) {
    for(int i = 0 ; i < size ; i ++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    const int SIZE = sizeof(arr) / sizeof(arr[0]);
    
    printArray(arr, SIZE);
    reverseArray(arr, SIZE);
    printArray(arr, SIZE);

    return 0;
}
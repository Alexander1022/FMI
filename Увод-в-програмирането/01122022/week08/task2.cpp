#include <iostream>
using namespace std;

int* newArray(const int* arr, const int size) {
    int* newArr = new int[size];
    for(int i = 0 ; i < size ; i ++) {
        *(newArr + i) = *(arr + i);
    }

    return newArr;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int* newArr = newArray(arr, SIZE);

    for(int i = 0 ; i < SIZE ; i ++) {
        cout << *(newArr + i) << " ";
    }

    delete newArr;

    return 0;
}
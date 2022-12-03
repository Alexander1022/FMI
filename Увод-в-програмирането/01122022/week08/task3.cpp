#include <iostream>
using namespace std;

void printArray(const int* arr, const int size) {
    for(int i = 0 ; i < size ; i ++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int *newArray(int *arr, int size) {
    int *newArray = new int[size];

    for(int i = 0 ; i < size ; i ++) {
        *(newArray + i) = *(arr + i);
    }

    return newArray;
}

int main() {
    int arr[4] = {4, 5, 6, 7};
    int *newArr = newArray(arr, 4);
    printArray(newArr, 4);

    delete newArr;
    
    return 0;
}
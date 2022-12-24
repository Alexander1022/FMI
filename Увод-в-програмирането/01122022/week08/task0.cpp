#include <iostream>
using namespace std;

int* half(int arr[], const int size) {
    const int SIZE = size / 2; 
    int *array = new int[SIZE];

    for(int i = 0 ; i < SIZE ; i ++) {
        *(array + i) = *(arr + i);
    }

    return array;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *pointer = half(arr, 5);
    
    for(int i = 0 ; i < 2 ; i ++) {
        cout << *(pointer + i) << " ";
    }
    cout << endl;

    return 0;
}
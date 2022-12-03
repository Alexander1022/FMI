#include <iostream>
using namespace std;

void print(const int *arr, const int size) {
    for(int i = 0 ; i < size ; i ++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {10,11,13,14,15};
    int arr2[] = {6,7,8,9,10};
    
    const int SIZE = sizeof(arr) / sizeof(int);
    const int SIZE2 = sizeof(arr) / sizeof(int);
    const int ALLSIZE = SIZE + SIZE2;

    int empty[ALLSIZE] = {};

    for(int i = 0 ; i < SIZE ; i ++) {
        *(empty + i) = *(arr + i);
    }

    for(int i = 0 ; i < SIZE2 ; i ++) {
        *(empty + i + SIZE2) = *(arr2 + i);
    }

    bubbleSort(empty, ALLSIZE);
    print(empty, ALLSIZE);

    return 0;
}
// вариант: 2

#include <iostream>
using namespace std;

void printMatrix(const int *arr, const int len) {
    for(int i = 0 ; i  < len ; i++) {
        if(*(arr + i) != 0) {
            cout << *(arr + i) << " ";
        }
    }
}

bool thereIsEl(const int *arr, const int len, const int el) {
    for(int i = 0 ; i  < len ; i++) {
        if(*(arr + i) == el) {
            return true;
        }
    }
    return false;
}

void dividers(const int *arr, int len, int n) {
    int tempArray[999] = {0};
    int counter = 0;

    for(int j = 1 ; j <= n ; j ++) {
        for(int i = 0 ; i < len ; i ++) {
            if(j % *(arr + i) != 0 && *(arr + i) % j != 0) {
                if( j % *(arr + i) != 0 && *(arr + i) % j != 0 && !thereIsEl(tempArray, 999, j)) {
                    tempArray[counter] = j;
                    counter++;
                }
            }
        }
    }
    printMatrix(tempArray, 999);
}

int main() {
    int n, i = 0;
    int input;
    int arr[999];

    do {
        cout << "n: ";
        cin >> n;
    } while(n >= 2048);

    while(true) {
        cout << "number: ";
        cin >> input;
        
        if(input == 0) {
            break;
        }

        arr[i] = input;
        i ++;
    }
    
    dividers(arr, i, n);

    return 0;
}
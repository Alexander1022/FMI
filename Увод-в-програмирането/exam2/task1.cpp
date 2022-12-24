// вариант: 2

#include <iostream>
using namespace std;

int *getLastElement(int *arr, int len) {
    int counter = 1;
    int flag = 0;
    int *returnEl;

    for(int i = 0 ; i < len ; i ++) {
        if(*(arr + i) > *(arr + i + 1)) {
            returnEl = (arr + i + 1);
            counter ++;
            if(counter >= 3) { 
                flag = 1;
            }
        }

        else { 
            break;
        }
    }

    if(counter >= 3) {
        return returnEl;
    } 
    
    return nullptr;
}


int *getSpecialElement (int *arr, int len) {
    if(len >= 3) {
        return getLastElement(arr, len);
    }

    return nullptr;
}

int main() {
    int size;
    int arr[512];

    cout << "N: ";
    cin >> size;

    for(int i = 0 ; i < size ; i ++) {
        cin >> arr[i];
    } 

    if(getSpecialElement(arr, size) == nullptr) {
        cout << "The array is not special" << endl;
    }
    else {
        cout << "The array is special, the special element is " << *getSpecialElement(arr, size)  << endl;
    }

    return 0;
}
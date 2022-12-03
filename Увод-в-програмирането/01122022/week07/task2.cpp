#include <iostream>
using namespace std;

int *searchForIt(const int *arr, const int el, const int len) {
    for(int i = 0 ; i < len ; i ++) {
        if(*(arr + i) == el) {
            return (int *)arr + i;
        }
    }

    return NULL;
}

int main() {

    int arr[] = {1, 2, 3, 4, 9};

    int *pointer = searchForIt(arr, 3, 5);
    cout << pointer;
    return 0;
}
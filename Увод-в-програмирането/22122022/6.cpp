#include <iostream>
using namespace std;

int findMin(int*, int);

int main() {
    int arr[5] = {10, 15, 4, 15, 16};
    cout << findMin(arr, 5) << endl;
    return 0;
}

int findMin(int arr[], int n){
    if(n == 1) {
        return arr[0];
    }
    return min(arr[n-1], findMin(arr,n - 1));
}
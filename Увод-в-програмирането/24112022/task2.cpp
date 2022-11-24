#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0 ; i < 3 ; i ++) {
        for(int j = 0 ; j < 3 ; j ++) {
            cout << "Enter element " << i << " " << j << ": ";
            cin >> arr[i][j];
        }
    }

    for(int i = 0 ; i < 3 ; i ++) {
        sum1 = sum1 + arr[i][2 - i];
    }

    for(int i = 0 ; i < 3 ; i ++) {
        sum2 = sum2 + arr[i][i];
    }

    cout << "sum of diagonal 1 is " << sum1 << endl;
    cout << "sum of diagonal 2 is " << sum2 << endl;
    
    return 0;
}
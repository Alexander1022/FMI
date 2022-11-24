#include <iostream>
using namespace std;

int main() {
    int arr[5][5];
    int sum[5] = {0, 0, 0, 0, 0};
    
    for(int i = 0 ; i < 5 ; i ++) {
        for(int j = 0 ; j < 5 ; j ++) {
            cout << "Enter element " << i << " " << j << ": ";
            cin >> arr[i][j];
            sum[i] = sum[i] + arr[i][j];
        }
    }   

    for(int i = 0 ; i < 5 ; i ++) {
        cout << "Sum of row " << i << " is " << sum[i] << endl;
    }

    return 0;
}
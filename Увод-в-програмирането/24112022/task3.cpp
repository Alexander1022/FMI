#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int arr2[3][3];

    for(int i = 0 ; i < 3 ; i ++) {
        for(int j = 0 ; j < 3 ; j ++) {
            cout << "Enter element " << i << " " << j << ": ";
            cin >> arr[i][j];
        }
    }

    for(int i = 0 ; i < 3 ; i ++) {
        for(int j = 0 ; j < 3 ; j ++) {
            arr2[i][j] = arr[j][i] + 10;
        }
    }

    for(int i = 0 ; i < 3 ; i ++) {
        for(int j = 0 ; j < 3 ; j ++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;
}
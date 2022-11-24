#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            cin >> matrix[i][j];
        }
    }

    int min = matrix[0][0];
    int max = matrix[0][0];

    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            if(matrix[i][j] < min) {
                min = matrix[i][j];
            }
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    cout << "min is " << min << endl;
    cout << "max is " << max << endl;
    
    return 0;
}
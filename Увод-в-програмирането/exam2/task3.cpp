// вариант: 2

#include <iostream>
using namespace std;

int getSumOf(const int matrix[][128], int rows, int columnIndex) {
    int sum = 0;

    for(int i = 0 ; i < rows ; i++) {
        sum += matrix[i][columnIndex];
    }

    return sum;
}

void swap(int matrix[][128], int rows, int column1, int column2) {
    for(int i = 0 ; i < rows ; i++) {
        int temp = matrix[i][column1];
        matrix[i][column1] = matrix[i][column2];
        matrix[i][column2] = temp;
    }
}

void bubbleSort(int matrix[][128], int rows, int cols) {
    for(int i = 0 ; i < cols ; i++) {
        for(int j = 0 ; j < cols - 1 ; j++) {
            if(getSumOf(matrix, rows, j) < getSumOf(matrix, rows, j + 1)) {
                swap(matrix, rows, j, j + 1);
            }
        }
    }
}

void printMatrix(const int matrix[][128], int rows, int cols) {
    for(int i = 0 ; i < rows ; i++) {
        for(int j = 0 ; j < cols ; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[128][128];
    int n, m;
    
    cout << "n: ";
    cin >> n;
    cout << "m: ";
    cin >> m;

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cout << "matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    printMatrix(matrix, n, m);

    bubbleSort(matrix, n, m);

    printMatrix(matrix, n, m);

    return 0;
}
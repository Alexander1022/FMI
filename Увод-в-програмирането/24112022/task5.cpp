#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int rowSum = 0;
    int colSum = 0;
    int diagSum1 = 0;
    int diagSum2 = 0;
    int underDiagonalSum = 0;
    int aboveDiagonalSum = 0;
    int underDiagonal2Sum = 0;
    int aboveDiagonal2Sum = 0;

    for(int i = 0 ; i < 3 ; i ++) {
        for(int j = 0 ; j < 3 ; j ++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0 ; i < 3 ; i ++) {
        for(int j = 0 ; j < 3 ; j ++) {
            rowSum = rowSum + arr[i][j];
            colSum = colSum + arr[j][i];
            diagSum1 = diagSum1 + arr[i][i];
            diagSum2 = diagSum2 + arr[i][2 - i];
            if(i > j) {
                underDiagonalSum = underDiagonalSum + arr[i][j];
            }
            if(i < j) {
                aboveDiagonalSum = aboveDiagonalSum + arr[i][j];
            }
            if(i + j < 2) {
                underDiagonal2Sum = underDiagonal2Sum + arr[i][j];
            }
            if(i + j > 2) {
                aboveDiagonal2Sum = aboveDiagonal2Sum + arr[i][j];
            }
        }
    }

    cout << "sum of row 1 is " << rowSum << endl;
    cout << "sum of col 1 is " << colSum << endl;
    cout << "sum of diagonal 1 is " << diagSum1 << endl;
    cout << "sum of diagonal 2 is " << diagSum2 << endl;
    cout << "sum of under diagonal is " << underDiagonalSum << endl;
    cout << "sum of above diagonal is " << aboveDiagonalSum << endl;
    cout << "sum of under diagonal 2 is " << underDiagonal2Sum << endl;
    cout << "sum of above diagonal 2 is " << aboveDiagonal2Sum << endl;

    return 0;
}
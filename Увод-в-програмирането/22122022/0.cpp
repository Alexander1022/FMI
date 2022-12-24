#include <iostream>
using namespace std;

int sumOfDigits(int);

int main() {
    int n = 456;
    cout << sumOfDigits(n) << endl;

    return 0;
}

int sumOfDigits(int n) {
    if(n == 0) {
        return 0;
    }

    return (n % 10 + sumOfDigits(n / 10));
}
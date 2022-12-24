#include <iostream>
using namespace std;

int reverse(int);

int main() {
    int n = 1045;
    cout << reverse(n) << endl;

    return 0;
}

int reverse(int n) {
    if(n == 0) {
        return 1;
    }

    return 10*(n%10+reverse(n/10));
}
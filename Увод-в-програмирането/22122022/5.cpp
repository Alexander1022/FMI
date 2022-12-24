#include <iostream>
using namespace std;

int fib(int);

int main() {
    cout << fib(8) << endl;
    return 0;
}

int fib(int n) {
    if(n <= 1) {
        return n;
    }

    return (fib(n - 1) + fib(n - 2));
}
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << boolalpha << (a >= b && a <= c);

    return 0;
}
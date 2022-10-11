#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << boolalpha << (a % b == 0);

    return 0;
}
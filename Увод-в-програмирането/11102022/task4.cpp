#include <iostream>
using namespace std;

int main() {
    int a, b;
    bool chetnost = 0;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    if((a * b) % 2 == 0) {
        chetnost = 1;
    }

    cout << a * b << ", " << (a * b) % 10 << ", " << chetnost << endl;
    return 0;
}
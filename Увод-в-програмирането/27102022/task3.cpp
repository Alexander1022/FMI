#include <iostream>
using namespace std;

int main() {
    int n, result = 0;
    int a = 0, b = 1;

    cout << "n: ";
    cin >> n;

    for(int i = 0 ; i < n ; i++) {
        int c = a + b;
        a = b;
        b = c;
        result = c;
    }

    cout << "Result: " << result << endl;

    return 0;
}
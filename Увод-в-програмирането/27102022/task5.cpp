#include <iostream>
using namespace std;

int main() {
    int n, result = 0;
    cout << "n: ";
    cin >> n;

    while(n != 0) {
        result = result + n % 10;
        n = n / 10;
    }

    cout << "Result is: " << result << endl;

    return 0;
}
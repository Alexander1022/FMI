#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, c = 0;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << boolalpha << (a + b > c && a + c > b && b + c > a);
    
    return 0;
}
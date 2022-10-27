#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    bool prime = true;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 2 ; i < sqrt(n) ; i ++ ) {
        if(n % i == 0) {
            prime = false;
            break;
        }
    }

    cout << (prime ? "YES" : "NO") << endl; 
    return 0;
}
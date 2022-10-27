#include <iostream>
using namespace std;

int main() {
    int n, min = 0;
    cout << "n: ";
    cin >> n;

    for(int i = 0 ; i < n ; i++) {
        cout << i+1 << " number: ";
        int number;
        cin >> number;
        if(number < min) {
            min = number;
        }
    }

    cout << "The biggest negative is " << min << endl;
    
    return 0;
}
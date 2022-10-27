#include <iostream>
using namespace std;

int main() {
    int number, pow, result = 1;
    cout << "number: ";
    cin >> number;

    cout << "pow: ";
    cin >> pow;

    for(int i = 0 ; i < pow ; i ++ ) {
        result = result * number;
    }

    cout << "Result is: " << result << endl;
    
    return 0;
}
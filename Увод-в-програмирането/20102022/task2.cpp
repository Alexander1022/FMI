#include <iostream>
using namespace std;

int main() {
    char symbol;

    cin >> symbol;

    if(symbol >= 'a' && symbol <= 'z') {
        cout << "The upper case character corresponding to is " << (char)(symbol - 32) << endl;
    } 
    else if(symbol >= 'A' && symbol <= 'Z') {
        cout << "The lower case character corresponding to is " << (char)(symbol + 32) << endl;
    }
    else {
        cout << symbol << " is not a letter." << endl;
    }

    return 0;
}
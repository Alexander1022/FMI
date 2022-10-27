#include <iostream>
using namespace std;

int main() {
    for(int i = 0 ; i < 256 ; i ++ ) {
        char ch = char(i);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << ch << endl;
        }
    }

    return 0;
}
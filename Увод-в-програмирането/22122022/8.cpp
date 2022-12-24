#include <iostream>
using namespace std;

void evaluate(const char*, int&, int&, int&);

int main() {
    int digits = 0;
    int big = 0 ;
    int small = 0;

    evaluate("3 Doors Down", digits, big, small);

    cout << "Digits: " << digits << endl;
    cout << "Big: " << big << endl;
    cout << "Small: " << small << endl;
    return 0;
}

void evaluate(const char *str, int &digits, int &big, int &small) {
    if(*str == '\0') {
        return;
    }

    if(*str >= '0' && *str <= '9') {
        digits++;
    } else if(*str >= 'A' && *str <= 'Z') {
        big++;
    } else if(*str >= 'a' && *str <= 'z') {
        small++;    
    }

    evaluate(str + 1, digits, big, small);
}
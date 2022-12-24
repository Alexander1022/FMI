#include <iostream>
using namespace std;

void swapcase(char*);

int main() {
    char str[] = "Hello There";

    swapcase(str);

    cout << str << endl;
    return 0;
}

void swapcase(char *str) {
    if(*str == '\0') {
        return;
    }

    if(*str >= 'a' && *str <= 'z') {
        *str -= 32;
    } else if(*str >= 'A' && *str <= 'Z') {
        *str += 32;
    }

    swapcase(str + 1);
}
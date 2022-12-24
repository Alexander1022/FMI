#include <iostream>
using namespace std;

bool areEqual(char*, char*);

int main() {
    cout << areEqual("Hello", "Hello1") << endl;
    return 0;
}

bool areEqual(char* str1, char* str2) {
    if(*str1 == '\0' && *str2 == '\0') {
        return true;
    }

    if(*str1 == *str2) {
        return areEqual(str1 + 1, str2 + 1);
    }

    return false;
}
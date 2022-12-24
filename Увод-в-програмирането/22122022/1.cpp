#include <iostream>
using namespace std;


int recStrlen(const char*);

int main() {
    const char *str = "hello there";
    cout << recStrlen(str) << endl;
    
    return 0;
}

int recStrlen(const char *str) {
    if(*str == '\0') {
        return 0;
    }

    return (1 + recStrlen(str + 1));
}
#include <iostream>
using namespace std;

int main() {
    int result = 0;
    int enter;

    while(true){
        cin >> enter;
        result = result + enter;
        if(enter == 0) {
            break;
        }
    }

    cout << "Result is: " << result << endl;

    return 0;
}
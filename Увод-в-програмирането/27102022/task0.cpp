#include <iostream>
using namespace std;

int main() {
    int n;
    int result = 1;
    cout << "n: " << endl;
    cin >> n;

    for(int i = 1 ; i <= n ; i++) {
        result = result * i;
    }

    cout << "Result is: " << result << endl;
    
    return 0;
}
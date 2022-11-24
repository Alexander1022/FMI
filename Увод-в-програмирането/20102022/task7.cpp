#include <iostream>
using namespace std;

int main() {
    int number, n = 0;
    int num_array[4] = {0, 0, 0, 0};

    cin >> number;
    
    while(number > 0) {
        num_array[n] = number % 10;
        number /= 10;
        n++;
    }

    if(n != 4) {
        cout << "Invalid number!" << endl;
    } else {
        //
    }

    return 0;
}
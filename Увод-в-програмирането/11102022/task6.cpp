#include <iostream>
using namespace std;

int main() {
    int arr[3];

    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];

    int min = arr[0];
    int max = arr[0];

    for(int i = 0 ; i < 3 ; i ++) {
        if(arr[i] > max) {
            max = arr[i];
        }

        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}
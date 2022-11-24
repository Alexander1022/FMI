#include <iostream>
using namespace std;

int main() {
    int n, x, counter = 0;

    cout << "Enter N: ";
    cin >> n;

    const int size = n;
    int arr[size];

    for(int i = 0 ; i < size ; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    cout << "Enter a random element: ";
    cin >> x;

    for(int i = 0 ; i < size ; i++) {
        if(arr[i] == x) {
            cout << "The element is on " << i << " position" << endl;
            counter ++;
        }
    }

    if(counter != 0 ) cout << "Counter is " << counter << endl;

    return 0;
}
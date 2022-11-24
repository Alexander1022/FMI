#include <iostream>
using namespace std;

int main () {
    int month;
    cin >> month;

    switch(month) {
        case 1:
            cout << "The season is winter." << endl;
            break;
        case 2:
            cout << "The season is winter." << endl;
            break;
        case 3:
            cout << "The season is spring." << endl;
            break;
        case 4:
            cout << "The season is spring." << endl;
            break;
        case 5:
            cout << "The season is spring." << endl;
            break;
        case 6:
            cout << "The season is summer." << endl;
            break;
        case 7:
            cout << "The season is summer." << endl;
            break;
        case 8:
            cout << "The season is summer." << endl;
            break;
        case 9:
            cout << "The season is autumn." << endl;
            break;
        case 10:
            cout << "The season is autumn." << endl;
            break;
        case 11:
            cout << "The season is autumn." << endl;
            break;
        case 12:
            cout << "The season is winter." << endl;
            break;
        default:
            cout << "Invalid month." << endl;
            break;
    }
    return 0;
}
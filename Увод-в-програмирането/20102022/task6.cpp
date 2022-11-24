#include <iostream>
using namespace std;

int main() {
    int usb;
    int ram;
    bool ssd;


    cout << "USB Ports: ";
    cin >> usb;

    cout << "RAM: ";
    cin >> ram;

    cout << "Does it have SSD?: ";
    cin >> ssd;

    if(usb >= 3 && ram >= 8 && ssd == true) {
        cout << "Traycho is a programmer with a new laptop! (happy Traycho)." << endl;
    } 
    else if(!ssd || ram < 8) {
        cout << "Traycho is buying it with no more thab 800 BGN." << endl;
    }
    else {
        cout << "Tryacho is not buying it (angry Traycho)." << endl;
    }

    return 0;
}
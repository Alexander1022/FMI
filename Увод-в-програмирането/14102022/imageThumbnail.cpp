#include<iostream>
using namespace std;

int main() {
    int w, h;
    const int THUMB_SIZE = 100;

    cout << "Image dimentions" << endl;
    cout << "Width: ";
    cin >> w;

    cout << "Height: ";
    cin >> h;

    if(w <= 0 || h <= 0) {
        cout << "Invalid dimentions" << endl;
        return 1;
    }

    int thumbW, thumbH;

    if(w <= 100 || h <= 100) {
        thumbW = w;
        thumbH = h;
    } 
    
    else if(w > h) {
        thumbW = THUMB_SIZE;
        thumbH = h * THUMB_SIZE / w;
    } 
    
    else {
        thumbH = THUMB_SIZE;
        thumbW = w * THUMB_SIZE / h;
    }

    cout << "Final dimentions: " << thumbW << "x" << thumbH << endl;

    return 0;
}
  
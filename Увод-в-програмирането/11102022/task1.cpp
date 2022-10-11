#include <iostream>
using namespace std;

int main() {
    int number;
    unsigned int number_lenght = 0;

    number_lenght = 0;
    cout << "Your number(should be with lenght of 3): ";
    cin >> number;
    
    int first = (number - (number % 100) ) / 100;
    int second = (number - number % 10 ) / 10 % 10;
    int third = number % 10;

    cout << "First digit: " << first << endl << "Second digit: " << second << endl << "Third digit: " << third << endl;
    cout << "Sum: " << first + second + third << endl;

    return 0;
}
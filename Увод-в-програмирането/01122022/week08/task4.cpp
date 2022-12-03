#include <iostream>
using namespace std;

int rev(int n) {
    int num = n;
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    return rev;
}
int *firstEl(int number) {
    int reverse = rev(number);
    int *newArr = new int[3];
    int i = 0;

    while(reverse != 0) {
        *(newArr + i) = reverse % 10;
        reverse /= 10;
        i ++;
    }

    return newArr;
}

int main() {
    const int number = 681;
    int *firstElement = firstEl(number);

    cout << firstElement << endl;
    cout << *firstElement << endl;

    delete firstElement;

    return 0;
}
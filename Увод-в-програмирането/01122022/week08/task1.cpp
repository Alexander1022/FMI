#include <iostream>
using namespace std;

void print(int *arr, const int size) {
    for(int i = 0 ; i < size ; i ++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    const int TEACHERS = 2;
    const int STUDENTS = 5;
    const int SIZE = TEACHERS * STUDENTS;

    int *grades = new int[SIZE];

    for(int i = 0 ; i < SIZE ; i ++) {
        cin >> *(grades + i);
    }

    print(grades, SIZE);

    delete [] grades;
    return 0;
}
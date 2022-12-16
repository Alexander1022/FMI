#include <iostream>
using namespace std;

int strSize(char *str) {
    int size = 0;

    while(str[size] != '\0') {
        size ++;
    }

    return size;
}

int power(int number, int power) {
    int result = 1;

    for (int i = 0; i < power; i++) {
        result *= number;
    }

    return result;
}

char *rev(char *str, int len) {
    char *result = new char[len + 1];
    int i = 0;

    while(str[i] != '\0') {
        result[i] = str[len - i - 1];
        i++;
    }
    result[i] = '\0';
    return result;
}

int dayOfTheWeek(int d, int m, int y)
{
    int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;

}

int bigBearConvert(const char c) {
    if (c >= 'a' && c <= 'm') {
        return c - 'a' + 1;
    } else {
        return 0;
    }
}

char *decTo14Base(int number) {
    char *result = new char[10];
    int i = 0;

    while(number > 0) {
        result[i] = (number % 14) + 'a' - 1;
        number /= 14;
        i++;
    }

    result[i] = '\0';
    return rev(result, i);
}

int toDecimal(char *str) {
    int res = 0;
    int size = strSize(str);

    for (int i = 0; i < size; i++) {
        res += bigBearConvert(str[i]) * power(14, i);
    }

    return res;
}


void split(const char *string, char res[3][10]) {
    int i = 0 ;
    char *curr = res[0];

    while(*string != '\0') {
        if(*string == '.') {
            *curr = '\0';
            curr = res[++i];
        } else {
            *curr++ = *string;
        }
        string++;
    }
}

void workingDay(const char *date) {
    char result[3][10];
    split(date, result);

    int d = toDecimal(result[0]);
    int m = toDecimal(result[1]);
    int y = toDecimal(result[2]);

    if(dayOfTheWeek(d, m, y) < 6) {
        cout << "No, " << d << "." << m << "." << y <<  " is a working day." << endl;
    } else {
        cout << "Yes, " << d << "." << m << "." << y <<  " isn't a working day." << endl;
    }

}


int main() {
    char str[] = "m.l.jej";
    int dec = 12;

    workingDay(str);
    char *symbol = decTo14Base(dec);
    cout << symbol << endl;

    delete [] symbol;

    return 0;
}
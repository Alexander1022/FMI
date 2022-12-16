#include <iostream>
using namespace std;

bool compareStrings(const char *str1, const char *str2) {
    int counter = 0;
    while(str1[counter] != '\0' && str2[counter] != '\0') {
        if(str1[counter] != str2[counter]) {
            return false;
        }
        counter ++;
    }

    if(str1[counter] != '\0' || str2[counter] != '\0'){
        return false;
    }
    
    return true;
}

bool containCounter(char words[1024][1024], int n, const char *word) {
    int counter = 0;
    for(int i = 0; i < n; i++) {
        if(compareStrings(words[i], word)) {
            counter ++;
        }
    }
    
    return counter;
}

void lexicSort(char words[1024][1024], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(compareStrings(words[i], words[j]) == false) {
                char temp[1024];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}

void histogramFromWords(char words[1024][1024], int n) {
    int i = 0;
    int counter = 1;

    while(i < n) {
        for(int j = 0 ; j < n ; j ++) {
            if(compareStrings(words[i], words[j]) && i != j) {
                counter ++;
            }
        }
        if(containCounter(words, i, words[i]) == 0) {
            cout << words[i] << " - " << counter << endl;
        }

        counter = 1;
        i ++;
    }
}


int main() {
    int n;
    char words[1024][1024];

    do {
        cout << "n: ";
        cin >> n;
    } while(n < 0 || n > 1024);

    for(int i = 0; i < n; i++) {
        cout << "word" << i + 1 << ": ";
        cin >> words[i];
    }

    histogramFromWords(words, n);

    return 0;
}
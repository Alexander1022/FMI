#include <iostream>
using namespace std;

// работи за Windows и Linux
void clearScreen() {
    cout << "\033[2J\033[1;1H";
}

void getStarted(int seaChess[][9], const int len) {
    for(int i = 0; i < len ; i++) {
        for(int j = 0; j < len ; j++) {
            seaChess[i][j] = 0;
        }
    }
}

void displaySeaChess(const int seaChess[][9], const int len) {
    for(int i = 0; i < len ; i++) {
        for(int j = 0; j < len ; j++) {
            if(seaChess[i][j] == 1) {
                cout << "| X ";
            }
            else if(seaChess[i][j] == 2) {
                cout << "| O ";
            }
            else {
                cout << "|   ";
            }
        }
        cout << " | " << endl;
    }
}

void getInput(int seaChess[][9], const int len, const int player) {
    int x, y;
    do {
        cout << "--- Играч " << player << " ---" << endl;
        cout << "Въведете поле за знак: ";
        cin >> x >> y;
    }while(x < 0 || x > len || y < 0 || y > len || seaChess[x][y] != 0);

    seaChess[x][y] = player;
}

int checkRows(int seaChess[][9], const int len, const int player) {
    int required = len;
    for(int i = 0 ; i < len ; i++) {
        int count = 0;
        for(int j = 0 ; j < len ; j++) {
            if(seaChess[i][j] == player) {
                count++;
            }
        }
        if(count == required) {
            return 1;
        }
    }
    return 0;
}

int checkCols(int seaChess[][9], const int len, const int player) {
    int required = len;
    for(int i = 0 ; i < len ; i++) {
        int count = 0;
        for(int j = 0 ; j < len ; j++) {
            if(seaChess[j][i] == player) {
                count++;
            }
        }
        if(count == required) {
            return 1;
        }
    }
    return 0;
}

int checkDiagonals(int seaChess[][9], const int len, const int player) {
    int required = len;
    int count = 0;

    for(int i = 0 ; i < len ; i++) {
        if(seaChess[i][i] == player) {
            count++;
        }
    }
    if(count == required) {
        return 1;
    }
    count = 0;
    for(int i = 0 ; i < len ; i++) {
        if(seaChess[i][len - i - 1] == player) {
            count++;
        }
    }
    if(count == required) {
        return 1;
    }

    return 0;
}

int checkDraw(int seaChess[][9], const int len, const int player) {
    const int required = len;
    if(checkRows(seaChess, len, player) == 1) {
        return 1;
    }
    else if(checkCols(seaChess, len, player) == 1) {
        return 1;
    }
    else if(checkDiagonals(seaChess, len, player) == 1) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n;
    int seaChess[9][9];
    int flag = 0;
    int player = 1;

    do {
        cout << "Какъв размер: ";
        cin >> n;
    }while(n < 3 || n > 9);

    getStarted(seaChess, n);

    while(!flag) {
        displaySeaChess(seaChess, n);
        getInput(seaChess, n, player);
        flag = checkDraw(seaChess, n, player);
        
        if(flag == 1) {
            cout << "Победи играч " << player << endl << "Готино." << endl;
            break;
        }
        
        clearScreen();
        player = player == 1 ? 2 : 1;
    }

    return 0;
}
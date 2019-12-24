//
// Created by jelly on 23/12/2019.
//
#include <iostream>

using namespace std;
int a[9][9] = {0,};

bool row[9][10] = {false,};
bool column[9][10] = {false,};
bool square[9][10] = {false,};

int getSquare(int i, int j) {
    if (i < 3) {
        if (j < 3) {
            return 0;
        } else if (j < 6) {
            return 1;
        }
        return 2;
    }

    if (i < 6) {
        if (j < 3) {
            return 3;
        } else if (j < 6) {
            return 4;
        }
        return 5;
    }

    if (j < 3) {
        return 6;
    } else if (j < 6) {
        return 7;
    }
    return 8;
}

bool check(int r, int c, int i) {
    return (row[r][i] ||
            column[c][i] ||
            square[getSquare(r, c)][i]);
}

bool go(int i, int j) {
    if (i == 8 && j == 9) {
        return true;
    }
    if (j >= 9) {
        return go(i + 1, 0);
    }
    if (a[i][j] != 0) {
        return go(i, j + 1);
    }

    for (int k = 1; k <= 9; k++) {
        if (check(i, j, k)) continue;
        row[i][k] = true;
        column[j][k] = true;
        square[getSquare(i, j)][k] = true;
        a[i][j] = k;
        if (go(i, j + 1)) return true;
        row[i][k] = false;
        column[j][k] = false;
        square[getSquare(i, j)][k] = false;
        a[i][j] = 0;
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int n;
            cin >> n;
            a[i][j] = n;
            if (n != 0) {
                row[i][n] = true;
                column[j][n] = true;
                square[getSquare(i, j)][n] = true;
            }
        }
    }

    go(0, 0);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << a[i][j] << ' ';
        }
        if (i == 8) break;
        cout << '\n';
    }
    return 0;
}

//
// Created by jelly on 22/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;


bool c[15];
int ans = 0;
int n;

void mark_diagonal_minus_minus(int i, int j, bool b[][15]) {
    if (i < 0 || j < 0) return;
    if (i >= n || j >= n) return;
    b[i][j] = true;
    mark_diagonal_minus_minus(i - 1, j - 1, b);

}

void mark_diagonal_minus_plus(int i, int j, bool b[][15]) {
    if (i < 0 || j < 0) return;
    if (i >= n || j >= n) return;
    b[i][j] = true;
    mark_diagonal_minus_plus(i - 1, j + 1, b);

}

void mark_diagonal_plus_minus(int i, int j, bool b[][15]) {
    if (i < 0 || j < 0) return;
    if (i >= n || j >= n) return;
    b[i][j] = true;
    mark_diagonal_plus_minus(i + 1, j - 1, b);
}

void mark_diagonal_plus_plus(int i, int j, bool b[][15]) {
    if (i < 0 || j < 0) return;
    if (i >= n || j >= n) return;
    b[i][j] = true;
    mark_diagonal_plus_plus(i + 1, j + 1, b);
}

void mark_row_minus(int i, int j, bool b[][15]) {
    if (i < 0 || j < 0) return;
    if (i >= n || j >= n) return;
    b[i][j] = true;
    mark_row_minus(i - 1, j, b);
}

void mark_row_plus(int i, int j, bool b[][15]) {
    if (i < 0 || j < 0) return;
    if (i >= n || j >= n) return;
    b[i][j] = true;
    mark_row_plus(i + 1, j, b);
}


void mark_column_minus(int i, int j, bool b[][15]) {
    if (i < 0 || j < 0) return;
    if (i >= n || j >= n) return;
    b[i][j] = true;
    mark_column_minus(i, j - 1, b);
}

void mark_column_plus(int i, int j, bool b[][15]) {
    if (i < 0 || j < 0) return;
    if (i >= n || j >= n) return;
    b[i][j] = true;
    mark_column_plus(i, j + 1, b);
}


void copy_arr(bool src[15][15], bool dist[15][15]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dist[i][j] = src[i][j];
        }
    }
}

void go(int index, bool b[][15]) {
    if (index == n) {
        ans++;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (c[i] || b[index][i]) continue;
        c[i] = true;
        b[index][i] = true;
        bool temp[15][15];
        copy_arr(b, temp);

        mark_diagonal_plus_plus(index, i, temp);
        mark_diagonal_minus_plus(index, i, temp);
        mark_diagonal_plus_minus(index, i, temp);
        mark_diagonal_minus_minus(index, i, temp);
        mark_row_plus(index, i, temp);
        mark_row_minus(index, i, temp);
        mark_column_plus(index, i, temp);
        mark_column_minus(index, i, temp);
        go(index + 1, temp);
        c[i] = false;
        b[index][i] = false;
    }
}


int main() {
    cin >> n;

    bool b[15][15] = {false,};
    go(0, b);
    cout << ans;
    return 0;
}

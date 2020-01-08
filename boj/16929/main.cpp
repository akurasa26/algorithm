//
// Created by jelly on 2020/01/03.
//
#include <iostream>

using namespace std;

char a[50][50];
bool b[50][50];

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int n, m;
bool f;

void dfs(int i, int j, int bi, int bj, char c) {
    if (f) return;
    if (i < 0 || j < 0 || i == n || j == m) return;

    if (a[i][j] != c) return;

    if (b[i][j]) {
        f = true;
        return;
    }


    b[i][j] = true;

    for (int l = 0; l < 4; l++) {
        int to_i = i + dx[l];
        int to_j = j + dy[l];

        if (to_i == bi && to_j == bj) continue;
        dfs(to_i, to_j, i, j, c);
    }
    b[i][j] = false;

}


int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++) {
            a[i][j] = str[j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            dfs(i, j, -1, -1, a[i][j]);
        }
    }

    if (f) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}

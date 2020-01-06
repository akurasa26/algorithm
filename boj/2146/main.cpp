//
// Created by jelly on 05/01/2020.
//
#include <iostream>

using namespace std;

int a[100][100];
int island[100][100];

int n;

int isl = 0;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int cnt = 0;
bool f = false;

void check_island(int i, int j) {
    if (i < 0 || j < 0 || i == n || j == n) {
        return;
    }

    if (!a[i][j]) return;
    if (island[i][j]) return;

    island[i][j] = isl;

    for (int k = 0; k < 4; k++) {
        check_island(i + dx[k], j + dy[k]);
    }
}

void build_bridge() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (island[i][j] > 0) {
                for (int k = 0; k < 4; k++) {
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if (x < 0 || y < 0 || x == n || y == n) continue;

                    if (island[x][y] == 0) {
                        island[x][y] = -abs(island[i][j]);
                    } else if (abs(island[x][y]) != abs(island[i][j])) {
                        f = true;
                        return;
                    }
                }
            }
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!island[i][j] && a[i][j]) {
                isl++;
                check_island(i, j);
            }
        }
    }

//    for(int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << island[i][j] << ' ';
//        }
//        cout << endl;
//    }

    while (!f) {
        cnt++;
        build_bridge();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << island[i][j] << ' ';
            }
            cout << endl;
            cout << "=============================";
            cout << endl;
        }
    }


    return 0;
}

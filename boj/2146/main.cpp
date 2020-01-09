//
// Created by jelly on 05/01/2020.
//
#include <iostream>
#include <cstring>
using namespace std;
int map[101][101];
int island[101][101];
bool check[101][101];
int d[101][101];
int isl = 0;
int n;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void check_d(int level) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int l = d[i][j];
            if (l == level) {
                for (int k = 0; k < 4; k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                        if (d[nx][ny] == -1) d[nx][ny] = level + 1;
                    }
                }
            }
        }
    }
}

void check_island(int i, int j) {
    if (i < 0 || j < 0 || i == n || j == n) {
        return;
    }

    if (!map[i][j]) return;
    if (island[i][j]) return;

    island[i][j] = isl;

    for (int k = 0; k < 4; k++) {
        check_island(i + dx[k], j + dy[k]);
    }
}

void extend_island() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int l = island[i][j];
            if (l && !check[i][j]) {
                for (int k = 0; k < 4; k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                        if (!check[nx][ny] && !island[nx][ny]) {
                            island[nx][ny] = l;
                            check[nx][ny] = true;
                        }
                    }
                }
            }

        }
    }
}

bool all_checked_island() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!island[i][j]) return false;
        }
    }

    return true;
}

int main() {
    cin >> n;
    memset(d, -1, sizeof(d));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
            if (map[i][j])
                d[i][j] = 0;
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!island[i][j] && map[i][j]) {
                isl++;
                check_island(i, j);
            }
        }
    }


    while (!all_checked_island()) {
        memset(check, false, sizeof(check));
        extend_island();
    }

    for (int i = 0; i < n; i++) {
        check_d(i);
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << island[i][j] << ' ';
        }
        cout << endl;
    }

    int m = 999999999;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int ni = i + 1;
            if (ni == n) continue;
            int nj = j + 1;
            if (nj == n) continue;
            if (island[i][j] != island[ni][j]) {
                m = min(m, d[i][j] + d[ni][j]);
            }

            if (island[i][j] != island[i][nj]) {
                m = min(m, d[i][j] + d[i][nj]);
            }
        }
    }

    cout << m;

    return 0;
}
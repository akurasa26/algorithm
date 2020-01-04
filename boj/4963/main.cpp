//
// Created by jelly on 2019/12/29.
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int w, h;
bool wh[50][50];
bool checked[50][50];
int c;


int wd[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int hd[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

void dfs(int x, int y) {
    if (x < 0 || y < 0 || x == h || y == w) return;

    if (checked[x][y] || !wh[x][y]) return;
    checked[x][y] = true;

    for (int i = 0; i < 8; i++) {
        dfs(x + hd[i], y + wd[i]);
    }
}


int main() {
    while (true) {
        c = 0;
        memset(&wh, false, sizeof(bool) * 50 * 50);
        memset(&checked, false, sizeof(bool) * 50 * 50);
        cin >> w >> h;
        if (w == 0 && h == 0) return 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> wh[i][j];
            }
        }

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (!checked[i][j] && wh[i][j]) {
                    c++;
                    dfs(i, j);
                }
            }
        }
        cout << c << '\n';
    }

    return 0;
}

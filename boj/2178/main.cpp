//
// Created by jelly on 2019/12/29.
//
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;
bool check[100][100];
int ans[100][100];
queue<long> q;

int hd[4] = {-1, 1, 0, 0};
int wd[4] = {0, 0, -1, 1};


void bfs(int x, int y, int before) {
    if (x < 0 || y < 0 || x == n || y == m) return;
    if (ans[x][y]) return;

    if (check[x][y]) {
        ans[x][y] = before + 1;
        for (int i = 0; i < 4; i++) {
            int n_x, n_y;
            n_x = x + hd[i];
            n_y = y + wd[i];
            if (!(n_x < 0) && !(n_y < 0))
                q.push((100000 * before) + (1000 * (n_x) + n_y));
        }
    } else return;

    while (!q.empty()) {
        long i = q.front();
        q.pop();
        bfs(i % 100000L / 1000, i % 1000, i / 100000 + 1);
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            check[i][j] = s[j] - 48;
        }
    }

    bfs(0, 0, 0);

    cout << ans[n - 1][m - 1];
    return 0;
}

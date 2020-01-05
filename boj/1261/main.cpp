//
// Created by jelly on 2020/01/05.
//
#include <iostream>
#include <deque>
#include <tuple>

using namespace std;

int a[101][101];
int d[101][101];


int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < n; j++) {
            a[i][j] = str[j] - 48;
            d[i][j] = -1;
        }
    }
    deque<pair<int, int> > q;
    q.push_back(make_pair(0, 0));
    d[0][0] = 0;
    while (!q.empty()) {
        int y, x;
        tie(y, x) = q.front();
        q.pop_front();
        for (int k = 0; k < 4; k++) {
            int ny = y + dy[k];
            int nx = x + dx[k];
            if (0 <= ny && ny < m && 0 <= nx && nx < n) {
                if (d[ny][nx] == -1) {
                    if (a[ny][nx] == 0) {
                        d[ny][nx] = d[y][x];
                        q.push_front(make_pair(ny, nx));
                    } else {
                        d[ny][nx] = d[y][x] + 1;
                        q.push_back(make_pair(ny, nx));
                    }
                }
            }
        }
    }

    cout << d[m - 1][n - 1];

    return 0;
}

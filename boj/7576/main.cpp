//
// Created by jelly on 01/01/2020.
//
#include <iostream>
#include <queue>

using namespace std;

int a[1000][1000];
bool b[1000][1000];

int nm;
int count = 0;
int m, n;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};


int mc = 0;

struct point {
    int x;
    int y;
    int c;
};
queue<point> q;

void bfs(point p) {
    if (p.x < 0 || p.y < 0 || p.x == n || p.y == m) return;

    if (b[p.x][p.y]) {
        return;
    }
    b[p.x][p.y] = true;

    if (a[p.x][p.y] == -1) return;
    a[p.x][p.y] = p.c;

    if (p.c > nm) {
        mc = -1;
        return;
    }

    mc = p.c;

    for (int i = 0; i < 4; i++) {
        point np;
        np.x = p.x + dx[i];
        np.y = p.y + dy[i];
        np.c = p.c + 1;
        q.push(np);
    }

}

bool check() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!a[i][j]) {
                return false;
            }
        }
    }
    return true;
}


int main() {
    cin >> m >> n;

    nm = n * m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int n;
            cin >> n;
            if (n == 1) {
                point p;
                p.x = i;
                p.y = j;
                p.c = 1;
                q.push(p);
            }
            a[i][j] = n;
        }
    }

    if (check()) {
        cout << 0;
        return 0;
    }


    while (!q.empty()) {
        point p = q.front();
        q.pop();
        bfs(p);
    }

    if (check()) {
        cout << mc - 1;
    } else {
        cout << -1;
    }


    return 0;
}

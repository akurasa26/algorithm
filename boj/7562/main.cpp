//
// Created by jelly on 01/01/2020.
//
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int l;
bool a[301][301];

int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

struct Point {
    int x;
    int y;
    int c;
};

queue<Point> q;
Point goal;

bool bfs(Point current) {
    if (current.x < 0 || current.y < 0 || current.x >= l || current.y >= l) return false;
    if (a[current.x][current.y]) {
        return false;
    }

    a[current.x][current.y] = true;

    if (goal.x == current.x && goal.y == current.y) {
        goal.c = current.c;
        return true;
    }

    for (int i = 0; i < 8; i++) {
        Point p;
        p.x = current.x + dx[i];
        p.y = current.y + dy[i];
        p.c = current.c + 1;
        q.push(p);
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cin >> l;
        memset(a, false, sizeof(bool) * 90601);

        Point current;
        cin >> current.x;
        cin >> current.y;
        current.c = 0;
        cin >> goal.x;
        cin >> goal.y;
        goal.c = 0;

        if (current.x == goal.x && current.y == goal.y) {
            cout << 0 << '\n';
            continue;
        }

        for (int i = 0; i < 8; i++) {
            Point p;
            p.x = current.x + dx[i];
            p.y = current.y + dy[i];
            p.c = current.c + 1;
            q.push(p);
        }

        while (!q.empty()) {
            if (bfs(q.front()))
                break;
            q.pop();
        }
        while (!q.empty()) {
            q.pop();
        }
        cout << (goal.c) << '\n';
    }

    return 0;
}

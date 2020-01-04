//
// Created by jelly on 2020/01/04.
//
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int n;
vector<int> a[3000 + 1];
int check[3000 + 1];
int dist[3000 + 1];


int go(int x, int p) {
    if (check[x] == 1) {
        return x;
    }

    check[x] = 1;

    for (int y: a[x]) {
        if (y == p) continue;

        int res = go(y, x);

        if (res == -2) return -2;
        if (res >= 0) {
            check[x] = 2;
            if (x == res) return -2;
            else return res;
        }
    }
    return -1;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int first, second;
        cin >> first >> second;

        a[first].push_back(second);
        a[second].push_back(first);
    }
    for (int i = 1; i <= n; i++) {
        check[i] = -2;
    }

    go(1, -1);

    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (check[i] == 2) {
            dist[i] = 0;
            q.push(i);
        } else {
            dist[i] = -1;
        }
    }
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int y : a[x]) {
            if (dist[y] == -1) {
                q.push(y);
                dist[y] = dist[x] + 1;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << dist[i] << ' ';
    }
    cout << '\n';
    return 0;

}



//
// Created by jelly on 2020/01/05.
//
#include <iostream>
#include <cstring>
#include <deque>

using namespace std;

int d[100001];
bool c[100001];


int main() {
    int n, m;
    cin >> n >> m;
    deque<int> q;
    q.push_front(n);

    d[n] = 0;
    c[n] = true;

    while (!q.empty()) {
        int now = q.front();
        q.pop_front();
        if (now * 2 <= 100000 && !c[now * 2]) {
            d[now * 2] = d[now];
            c[now * 2] = true;
            q.push_front(now * 2);
        }

        if (now + 1 <= 100000 && !c[now + 1]) {
            d[now + 1] = d[now] + 1;
            c[now + 1] = true;
            q.push_back(now + 1);
        }
        if (now - 1 >= 0 && !c[now - 1]) {
            d[now - 1] = d[now] + 1;
            c[now - 1] = true;
            q.push_back(now - 1);
        }
    }


    cout << d[m];
    return 0;
}

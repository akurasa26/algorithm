//
// Created by jelly on 2020/01/05.
//
#include <iostream>
#include <queue>
using namespace std;

int d[200001];


int main() {
    int n, k;
    cin >> n >> k;

    if (n == k) {
        cout << 0;
        return 0;
    }
    queue<int> q;
    q.push(n);
    d[n] = 1;
    while (!d[k]) {
        int temp = q.front();
        q.pop();
        int d_t = temp * 2;
        int m_t = temp - 1;
        int p_t = temp + 1;
        if (d_t < 200001 && d_t >= 0 && !d[d_t]) {
            d[d_t] = d[temp] + 1;
            q.push(d_t);
        }
        if (m_t < 200001 && m_t >= 0 && !d[m_t]) {
            d[m_t] = d[temp] + 1;
            q.push(m_t);
        }
        if (p_t < 200001 && p_t >= 0 && !d[p_t]) {
            d[p_t] = d[temp] + 1;
            q.push(p_t);
        }
    }

    cout << d[k] - 1;
    return 0;
}


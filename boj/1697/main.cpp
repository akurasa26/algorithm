//
// Created by jelly on 2020/01/05.
//
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int d[200001];
queue<int> q;


int main() {
    int n, k;
    cin >> n >> k;

    if (n == k) {
        cout << 0;
        return 0;
    }

    q.push(n);
    while (!d[k]) {
        int temp = q.front();
        q.pop();
        if (d[temp]) continue;
        int double_t = temp * 2;
        int m_t = temp - 1;
        int p_t = temp + 1;
        if (double_t < 200001 && double_t >= 0) {
            d[double_t] = d[temp] + 1;
            q.push(double_t);
        }
        if (double_t < 200001 && double_t >= 0) {
            d[m_t] = d[temp] + 1;
            q.push(m_t);
        }
        if (double_t < 200001 && double_t >= 0) {
            d[p_t] = d[temp] + 1;
            q.push(p_t);
        }
    }

    cout << d[k];
    return 0;
}


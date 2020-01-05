//
// Created by jelly on 2020/01/05.
//
#include <iostream>
#include <queue>

using namespace std;

int d[200001];
int f[200001];


int main() {
    int n, k;
    cin >> n >> k;

    if (n == k) {
        cout << 0 << endl;
        cout << n;
        return 0;
    }
    queue<int> q;
    q.push(n);
    d[n] = 1;
    f[n] = -2000000;
    while (!d[k]) {
        int temp = q.front();
        q.pop();
        int d_t = temp * 2;
        int m_t = temp - 1;
        int p_t = temp + 1;
        if (d_t < 200001 && d_t >= 0 && !d[d_t]) {
            d[d_t] = d[temp] + 1;
            f[d_t] = temp;
            q.push(d_t);
        }
        if (m_t < 200001 && m_t >= 0 && !d[m_t]) {
            d[m_t] = d[temp] + 1;
            f[m_t] = temp;
            q.push(m_t);
        }
        if (p_t < 200001 && p_t >= 0 && !d[p_t]) {
            d[p_t] = d[temp] + 1;
            f[p_t] = temp;
            q.push(p_t);
        }
    }

    cout << d[k] - 1 << endl;

    vector<int> v;

    int g = f[k];
    do {
        v.push_back(g);
        g = f[g];
    } while (g != -2000000);

    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << ' ';
    }

    cout << k;
    return 0;
}


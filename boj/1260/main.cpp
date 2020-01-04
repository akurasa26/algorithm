//
// Created by jelly on 28/12/2019.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<int> dn[1001];
vector<int> bn[1001];
queue<int> b_v;
bool d_check[1001];
bool b_check[1001];

void dfs(int node) {
    d_check[node] = true;
    cout << node << ' ';
    sort(dn[node].begin(), dn[node].end());
    for (int i = 0; i < dn[node].size(); i++) {
        int n = dn[node][i];
        if (!d_check[n]) {
            dfs(n);
        }
    }
}

void bfs(int node) {
    if (b_check[node]) return;
    if (!b_check[node]) {
        cout << node << ' ';
    }
    b_check[node] = true;

    sort(bn[node].begin(), bn[node].end());
    for (int i = 0; i < bn[node].size(); i++) {
        int n = bn[node][i];
        if (!b_check[n]) {
            b_v.push(n);
        }
    }


    while (!b_v.empty()) {
        int n = b_v.front();
        bfs(n);
        if (!b_v.empty())
            b_v.pop();

    }
}


int main() {
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < m; i++) {
        int from, to;
        cin >> from >> to;
        dn[from].push_back(to);
        dn[to].push_back(from);
        bn[from].push_back(to);
        bn[to].push_back(from);
    }

    dfs(k);
    cout << '\n';
    bfs(k);

    return 0;
}

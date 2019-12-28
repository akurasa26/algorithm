//
// Created by jelly on 28/12/2019.
//
#include <iostream>
#include <vector>

using namespace std;

vector<int> a[1001];
bool check[1001];

void dfs(int node) {
    check[node] = true;
    for (int i = 0; i < a[node].size(); i++) {
        int next = a[node][i];
        if (check[next]) continue;
        dfs(next);
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    int c = 0;
    for (int i = 1; i <= n; i++) {
        if (!check[i]) {
            dfs(i);
            c++;
        }
    }

    cout << c;
}
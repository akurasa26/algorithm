//
// Created by jelly on 24/11/2019.
//
#include <iostream>

using namespace std;

long long d[501][501];
int s[501][501];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> s[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]) + s[i][j];
        }
    }

    int max = 0;
    for (int i = 0; i <= n; i++) {
        if (max < d[n][i]) {
            max = d[n][i];
        }
    }

    cout << max;
    return 0;
}
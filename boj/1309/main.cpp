//
// Created by jelly on 24/11/2019.
//
#include <iostream>

using namespace std;
long long d[100001][3];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    d[1][0] = 1;
    d[1][1] = 1;
    d[1][2] = 1;

    for (int i = 2; i <= n; i++) {
        d[i][0] = d[i - 1][0] + d[i - 1][1] + d[i - 1][2];
        d[i][1] = d[i - 1][0] + d[i - 1][2];
        d[i][2] = d[i - 1][0] + d[i - 1][1];
        for (int j = 0; j < 3; j++) {
            d[i][j] %= 9901;
        }
    }

    cout << (d[n][0] + d[n][1] + d[n][2]) % 9901;
    return 0;
}
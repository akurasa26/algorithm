//
// Created by jelly on 29/11/2019.
//
#include <iostream>

using namespace std;
int a[1001][3];
int d[1001][3];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    int ans = 100000000;

    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            if (i == j) {
                d[1][j] = a[1][j];
            } else {
                d[1][j] = 1000 * 1000 + 1;
            }
        }
        for (int j = 2; j <= n; j++) {
            d[j][0] = min(d[j - 1][1], d[j - 1][2]) + a[j][0];
            d[j][1] = min(d[j - 1][0], d[j - 1][2]) + a[j][1];
            d[j][2] = min(d[j - 1][0], d[j - 1][1]) + a[j][2];
        }

        for (int j = 0; j <= 2; j++) {
            if (i == j) continue;
            ans = min(ans, d[n][j]);
        }
    }

    cout << ans;
    return 0;
}

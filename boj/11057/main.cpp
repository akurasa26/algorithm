//
// Created by jelly on 24/11/2019.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    long long d[1001][10] = {0,};

    for (int i = 0; i < 10; i++) d[1][i] = 1;

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = j; k >= 0; k--) {
                d[i][j] += d[i - 1][k];
            }
            d[i][j] %= 10007;
        }
    }

    int sum = 0;
    for (int j = 0; j < 10; j++) {
        sum += d[n][j];
    }

    cout << (sum % 10007);
    return 0;
}
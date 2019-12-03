//
// Created by jelly on 02/12/2019.
//
#include <iostream>

using namespace std;
int d[15][15];

int main() {
    for (int i = 1; i < 15; i++) {
        d[0][i] = i;
    }
    for (int i = 1; i < 15; i++) {
        for (int j = 1; j < 15; j++) {
            d[i][j] = d[i][j - 1] + d[i - 1][j];
        }
    }

    int T;
    cin >> T;
    int k, n;

    while (T--) {
        cin >> k >> n;
        cout << d[k][n] << '\n';
    }

    return 0;
}

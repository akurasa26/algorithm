//
// Created by jelly on 15/12/2019.
//
#include <iostream>

using namespace std;
int b[10][4] = {
        {7, 10, 10, 10},
        {2, 4,  10, 10},
        {1, 3,  5,  10},
        {2, 6,  10, 10},
        {1, 5,  7,  10},
        {2, 4,  6,  8},
        {3, 5,  9,  10},
        {4, 8,  0,  10},
        {7, 5,  9,  10},
        {6, 8,  10, 10}
};

long long d[1001][11] = {0,};

int main() {
    for (int i = 0; i < 11; i++) {
        d[1][i] = 1;
    }
    for (int i = 2; i < 1001; i++) {
        for (int k = 0; k < 10; k++) {
            for (int j = 0; j < 4; j++) {
                int l = b[k][j];
                if (l == 10) continue;

                d[i][l] += d[i - 1][l] % 10000000;
                d[i][l] %= 10000000;
            }
        }
    }

    int t;
    cin >> t;

    int n = 0;

    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += d[n][i];
        }
        cout << sum % 1234567 << endl;
    }

    return 0;
}

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

unsigned long long d[1001][11] = {0,};

int main() {
    for (int i = 0; i < 11; i++) {
        d[1][i] = 1;
    }
    for (int i = 2; i < 1001; i++) {
        d[i][0] = d[i - 1][7];
        d[i][1] = d[i - 1][2] + d[i - 1][4];
        d[i][2] = d[i - 1][1] + d[i - 1][3] + d[i - 1][5];
        d[i][3] = d[i - 1][2] + d[i - 1][6];
        d[i][4] = d[i - 1][1] + d[i - 1][5] + d[i - 1][7];
        d[i][5] = d[i - 1][2] + d[i - 1][4] + d[i - 1][6] + d[i - 1][8];
        d[i][6] = d[i - 1][3] + d[i - 1][5] + d[i - 1][9];
        d[i][7] = d[i - 1][4] + d[i - 1][8] + d[i - 1][0];
        d[i][8] = d[i - 1][7] + d[i - 1][5] + d[i - 1][9];
        d[i][9] = d[i - 1][6] + d[i - 1][8];

        for (int k = 0; k < 10; k++) {
            d[i][k] %= 1234567;
        }
    }

    int t;
    cin >> t;

    int n = 0;

    while (t--) {
        cin >> n;
        unsigned long long sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += d[n][i];
        }
        // 50 == 944440
        cout << sum % 1234567 << endl;
    }

    return 0;
}

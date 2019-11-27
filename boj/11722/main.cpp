//
// Created by jelly on 26/11/2019.
//
#include <iostream>

using namespace std;

int a[1001];
int d[1001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= t; i++) {
        d[i] = 1;
        for (int j = i; j > 0; j--) {
            if (a[j] > a[i] && d[i] < (d[j] + 1)) {
                d[i] = d[j] + 1;
            }
        }
    }

    int max = 0;
    for (int i = 1; i <= t; i++) {
        if (max < d[i]) max = d[i];
    }

    cout << max;

    return 0;
}
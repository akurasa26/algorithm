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
        d[i] = a[i];
        for (int j = i; j > 0; j--) {
            if (a[i] > a[j] && d[i] < (d[j] + a[i])) {
                d[i] = d[j] + a[i];
            }
        }
    }

    int max = 0;
    for (int i = 1; i <= t; i++) {
        if (d[i] > max) {
            max = d[i];
        }
    }
    cout << max;

    return 0;
}

//
// Created by jelly on 26/12/2019.
//
#include <iostream>
#include <algorithm>
using namespace std;
int a[500 + 1];

int d[500 + 1];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        a[l] = r;
    }

    for (int i = 1; i <= 500; i++) {
        if (a[i]) {
            d[i] = 1;
            int l = i;
            int r = a[i];
            for (int j = l - 1; j > 0; j--) {
                if (a[j] && a[j] < a[i]) {
                    d[i] = max(d[j] + 1, d[i]);
                }
            }
        }
    }

    int M = 0;
    for (int i = 1; i <= 500; i++) {
        M = max(M, d[i]);
    }

    cout << n - M;

    return 0;
}
//
// Created by jelly on 26/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;

int a[501];
int idx[501];
int d[101];
int a2[501];
int idx2[501];
int d2[101];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int b, c;
        cin >> b >> c;
        a[b] = c;
        a2[c] = b;
        idx[i] = b;
        idx2[i] = c;
    }

    sort(idx, idx + t);
    sort(idx2, idx2 + t);
    d[0] = 1;
    for (int j = 1; j < t; j++) {
        d[j] = 1;
        int i = idx[j];
        for (int k = j - 1; k >= 0; k--) {
            int l = idx[k];
            if (a[i] > a[l] && d[k] >= d[j]) {
                d[j] = d[k] + 1;
            }
        }
    }

    d2[0] = 1;
    for (int j = 1; j < t; j++) {
        d2[j] = 1;
        int i = idx2[j];
        for (int k = j - 1; k >= 0; k--) {
            int l = idx2[k];
            if (a2[i] > a2[l] && d2[k] >= d2[j]) {
                d[j] = d2[k] + 1;
            }
        }
    }

    int M = 0;
    for (int i = 0; i < t; i++) {
        M = max(M, d[i]);
        M = max(M, d2[i]);
    }
    cout << t - M;
    return 0;
}

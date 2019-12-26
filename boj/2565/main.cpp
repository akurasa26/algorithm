//
// Created by jelly on 26/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;

int a[501];
int idx[501];
int ans = 999999999;
int t;


bool check() {
    for (int j = 0; j < t; j++) {
        int i = idx[j];
        if (a[i] == 0) continue;
        for (int k = i - 1; k >= 0; k--) {
            if (a[k] > a[i]) return false;
            if (a[k] == 0) continue;
            if (a[k] < a[i]) break;
        }
    }
    return true;
}

void go(int j, int c) {
    if (j == t) return;
    if (c >= ans) return;

    for (int k = j; k < t; k++) {
        int m = idx[k];
        int temp = a[m];
        a[m] = 0;
        if (check()) {
            ans = min(c, ans);
            a[m] = temp;
            return;
        }
        go(k + 1, c + 1);
        a[m] = temp;
    }
    go(j + 1, c);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    for (int i = 0; i < t; i++) {
        int b, c;
        cin >> b >> c;
        a[b] = c;
        idx[i] = b;
    }

    sort(idx, idx + t);

    if (!check()) {
        go(0, 1);
    }

    cout << ans;
    return 0;
}

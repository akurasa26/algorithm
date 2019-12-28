//
// Created by jelly on 28/12/2019.
//
#include <iostream>

using namespace std;
int a[101][2];
int M = 0;
int n, k;

void go(int index, int w, int v) {
    if (w > k) return;
    if (index == n) return;

    M = max(M, v);

    for (int i = index; i < n; i++) {
        go(index + 1, w + a[i][0], v + a[i][1]);
    }
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
    }
    go(0, 0, 0);

    cout << M;
    return 0;
}

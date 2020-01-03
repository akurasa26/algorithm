//
// Created by jelly on 28/12/2019.
//
#include <iostream>

using namespace std;
int a[101][2];
int m[101][100001];
int M = 0;
int n, k;

int go(int index, int w) {
    if (index >= n) return 0;

    int ans = m[index][w];

    if (ans >= 0) {
        return ans;
    } else {
        ans = 0;
    }

    if (w - a[index][0] >= 0) ans = max(go(index + 1, w - a[index][0]) + a[index][1], go(index + 1, w));
    else ans = go(index + 1, w);

    return ans;
}

int main() {
    memset(m, -1, sizeof(m));
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
    }

    cout << go(0, k);

    return 0;
}

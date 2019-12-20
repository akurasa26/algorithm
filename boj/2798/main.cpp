//
// Created by jelly on 17/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;
int a[100];
int b[100];

int main() {
    int n, m;
    cin >> n >> m;

    b[n - 3] = 1;
    b[n - 2] = 1;
    b[n - 1] = 1;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = -1;

    do {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (b[i]) sum += a[i];
        }

        if (sum <= m) {
            ans = max(ans, sum);
        }
        if (ans == m) break;
    } while (next_permutation(b, b + n));

    cout << ans;

    return 0;
}

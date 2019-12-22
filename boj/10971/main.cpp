//
// Created by jelly on 16/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;
int w[10][10];
int a[10];

int main() {
    for (int i = 1; i < 10; i++) a[i] = i;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> w[i][j];
        }
    }

    int ans = 1e9;

    do {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                if (w[a[n - 1]][a[0]] == 0) {
                    sum += 20000000;
                    continue;
                }
                sum += w[a[n - 1]][a[0]];
            } else {
                if (w[a[i - 1]][a[i]] == 0) {
                    sum += 20000000;
                    continue;
                }
                sum += w[a[i - 1]][a[i]];
            }
        }
        ans = min(ans, sum);
    } while (next_permutation(a + 1, a + n));

    cout << ans;

    return 0;
}


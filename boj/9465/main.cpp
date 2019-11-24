//
// Created by jelly on 24/11/2019.
//
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    while (N--) {
        int n;
        cin >> n;
        int s[100001][3] = {0,};
        long long d[100001][3] = {0,};
        for (int i = 1; i <= n; i++) cin >> s[i][1];
        for (int i = 1; i <= n; i++) cin >> s[i][2];
        for (int i = 1; i <= n; i++) {
            d[i][0] += max(d[i - 1][1], d[i - 1][2]);
            d[i][1] += max(d[i - 1][2], d[i - 1][0]) + s[i][1];
            d[i][2] += max(d[i - 1][1], d[i - 1][0]) + s[i][2];
        }
        cout << max(max(d[n][0], d[n][1]), d[n][2]) << '\n';
    }

    return 0;
}

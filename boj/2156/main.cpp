//
// Created by jelly on 24/11/2019.
//

#include <iostream>
#include <cmath>

using namespace std;
long long d[10001];
int s[10001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }

    d[1] = s[1];
    d[2] = s[1] + s[2];

    for (int i = 3; i <= n; i++) {
        d[i] = d[i - 1];
        if (d[i] < d[i - 2] + s[i]) {
            d[i] = d[i - 2] + s[i];
        }
        if (d[i] < d[i - 3] + s[i - 1] + s[i]) {
            d[i] = d[i - 3] + s[i - 1] + s[i];
        }
    }

    cout << d[n];
    return 0;
}
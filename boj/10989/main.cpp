//
// Created by jelly on 18/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;
short a[10001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;

    int m;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        ++a[m];
    }

    for (int i = 1; i < 10001; ++i) {
        short time = a[i];
        for (int j = 0; j < time; ++j) {
            cout << i << '\n';
        }
    }

    return 0;
}

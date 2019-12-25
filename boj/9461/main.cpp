//
// Created by jelly on 25/12/2019.
//
#include <iostream>

using namespace std;
long long d[101];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    d[0] = 0;
    d[1] = 1;
    d[2] = 1;
    d[3] = 1;
    d[4] = 2;
    d[5] = 2;
    d[6] = 3;
    d[7] = 4;
    d[8] = 5;
    d[9] = 7;
    d[10] = 9;
    for (int i = 11; i < 101; i++) {
        d[i] = d[i - 1] + d[i - 5];
    }

    while (t--) {
        int n;
        cin >> n;
        cout << d[n] << '\n';
    }

    return 0;
}

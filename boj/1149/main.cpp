//
// Created by jelly on 24/11/2019.
//
#include <iostream>

using namespace std;
int d[1000][3];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {

        cin >> d[i][0];
        cin >> d[i][1];
        cin >> d[i][2];

        d[i][0] = min(d[i-1][1], d[i-1][2]) + d[i][0];
        d[i][1] = min(d[i-1][2], d[i-1][0]) + d[i][1];
        d[i][2] = min(d[i-1][1], d[i-1][0]) + d[i][2];
    }

    cout << min(min(d[n][0], d[n][1]), d[n][2]);
    return 0;
}
//
// Created by jelly on 25/12/2019.
//
#include <iostream>

using namespace std;
int a[301];
int d[301][2];

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> a[i];
    }

    // 0 이 이전수를 안골랐을 경우
    // 1 은 이전수를 골랐을 경우
    d[1][0] = a[1];
    for (int i = 2; i <= t; i++) {
        d[i][0] = d[i - 2][1] + a[i];
        d[i][1] = d[i - 1][0] + a[i];
    }

    cout << max(d[t][0], d[t][1]);


    return 0;
}


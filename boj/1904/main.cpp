//
// Created by jelly on 24/12/2019.
//
#include <iostream>

using namespace std;

long long d[1000001];

void init_d(int n) {
    d[n] = (d[n - 2] + d[n - 1]) % 15746;
    d[n - 2] %= 15746;
}

int main() {
    int n;
    cin >> n;

    d[0] = 0;
    d[1] = 1;
    d[2] = 2;
    for (int i = 3; i <= n; i++) {
        init_d(i);
    }

    cout << d[n] % 15746;
    return 0;
}

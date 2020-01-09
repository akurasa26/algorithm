//
// Created by jelly on 05/01/2020.
//
#include <iostream>
#include <algorithm>

using namespace std;
int d[10];
int a[10];

int main() {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    for (int i = n - 1; i >= 0; i--) {
        d[i] = k / a[i];
        k %= (d[i] * a[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += d[i] * a[i];
    }

    cout << sum;

    return 0;
}

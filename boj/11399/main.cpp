//
// Created by jelly on 05/01/2020.
//
#include <iostream>
#include <algorithm>

using namespace std;
int a[1000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            ans += a[i];
        }
    }

    cout << ans;
    return 0;
}


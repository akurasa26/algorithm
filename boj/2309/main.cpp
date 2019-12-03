//
// Created by jelly on 03/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 9;
    int a[9];
    int sum = 0;
    while (n--) {
        cin >> a[n];
        sum += a[n];
    }

    sort(a, a + 9);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (i == j) continue;
            if ((sum - a[i] - a[j]) == 100) {
                if (i == j) continue;
                for (int k = 0; k < 9; k++) {
                    if (j == k || i == k) continue;
                    cout << a[k] << '\n';

                }
                return 0;
            }
        }
    }

    return 0;
}
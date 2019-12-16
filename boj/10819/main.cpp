//
// Created by jelly on 15/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;
int a[8];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);
    int m = -1000;
    do {
        int temp = 0;
        for (int i = 1; i < n; i++) {
            temp += abs(a[i - 1] - a[i]);
        }
        m = max(temp, m);
    } while (next_permutation(a, a + n));

    cout << m;

    return 0;
}

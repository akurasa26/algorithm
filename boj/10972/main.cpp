//
// Created by jelly on 15/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;
int a[10000];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool not_last = next_permutation(a, a + n);

    if (!not_last) {
        cout << -1;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
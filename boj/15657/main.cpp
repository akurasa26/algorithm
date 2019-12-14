//
// Created by jelly on 11/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;

int a[10];
int c[10];

void answer(int index, int n, int m, int before) {
    if (index == m) {
        for (int i = 0; i < m; i++) cout << c[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = before; i < n; i++) {
        c[index] = a[i];
        answer(index + 1, n, m, i);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    answer(0, n, m, 0);
}
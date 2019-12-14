//
// Created by jelly on 11/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;

int a[10];
bool b[10];
int c[10];

void answer(int index, int n, int m) {
    if (index == m) {
        for (int i = 0; i < m; i++) cout << c[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        if (b[i]) continue;
        b[i] = true;
        c[index] = a[i];
        answer(index + 1, n, m);
        b[i] = false;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    answer(0, n, m);
}
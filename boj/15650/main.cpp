//
// Created by jelly on 11/12/2019.
//
#include <iostream>

using namespace std;

bool a[10];
int c[10];

void answer(int index, int n, int m, int before) {
    if (index == m) {
        for (int i = 0; i < m; i++) cout << c[i] << ' ';
        cout << '\n';
    }
    for (int i = before; i <= n; i++) {
        if (a[i]) continue;
        a[i] = true;
        c[index] = i;
        answer(index + 1, n, m, i);
        a[i] = false;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    answer(0, n, m, 1);
}
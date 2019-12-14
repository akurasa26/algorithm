//
// Created by jelly on 11/12/2019.
//
#include <iostream>

using namespace std;

bool a[10];
int c[10];

void answer(int index, int n, int m) {
    if (index == m) {
        for (int i = 0; i < m; i++) cout << c[i] << ' ';
        cout << '\n';
    }
    for (int i = 1; i <= n; i++) {
        if (a[i]) continue;
        a[i] = true;
        c[index] = i;
        answer(index + 1, n, m);
        a[i] = false;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    answer(0, n, m);
}
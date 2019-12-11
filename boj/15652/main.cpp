//
// Created by jelly on 11/12/2019.
//
#include <iostream>

using namespace std;
int c[10];

void answer(int index, int n, int m, int before) {
    if (index == m) {
        for (int i = 0; i < m; i++) cout << c[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = before; i <= n; i++) {
        c[index] = i;
        answer(index + 1, n, m, i);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    answer(0, n, m, 1);
}
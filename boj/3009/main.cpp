//
// Created by jelly on 03/12/2019.
//
#include <iostream>

using namespace std;
int x[1001];
int y[1001];

int main() {
    int x_t, y_t;
    for (int i = 0; i < 3; i++) {
        cin >> x_t >> y_t;
        x[x_t]++;
        y[y_t]++;
    }

    for (int i = 0; i < 1001; i++) {
        if (x[i] == 1) cout << i << ' ';
    }

    for (int i = 0; i < 1001; i++) {
        if (y[i] == 1) cout << i;
    }

    return 0;
}
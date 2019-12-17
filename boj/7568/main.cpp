//
// Created by jelly on 17/12/2019.
//
#include <iostream>

using namespace std;
int a[50];
int x[50];
int y[50];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        a[i] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (x[i] < x[j] && y[i] < y[j]) {
                a[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}

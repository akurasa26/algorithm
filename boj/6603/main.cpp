//
// Created by jelly on 16/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;

int a[13];
int b[13];

int main() {
    while (true) {
        int n;
        cin >> n;
        if (!n) return 0;

        for (int i = 0; i < 6; i++) {
            b[i] = 1;
        }

        for (int i = 6; i < 13; i++) {
            b[i] = 0;
        }

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        do {
            for (int i = 0; i < n; i++) {
                if (b[i]) {
                    cout << a[i] << " ";
                }
            }
            cout << "\n";
        } while (prev_permutation(b, b + n));
        cout << "\n";
    }
}
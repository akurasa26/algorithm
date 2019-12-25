//
// Created by jelly on 25/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;
int a[16];

int main() {
    int r, c;
    cin >> r >> c;

    int rc = r * c;
    for (int i = c; i <= rc; i += c) {
        int j = i - 1;
        int n;
        cin >> n;
        do {
            a[j--] = n % 10;
        } while (n /= 10);
    }

    int b = (1 << rc);
    int M = 0;
    // 0 == |, 1 == -
    for (int i = 0; i < b; i++) {
        int sum = 0;
        int before = 0;
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < c; k++) {
                if (i & (1 << (j * c + k))) {
                    before = before * 10 + a[j * c + k];
                    if (k == c - 1) {
                        sum += before;
                        before = 0;
                    }
                } else {
                    sum += before;
                    before = 0;
                }
            }
        }

        for (int j = 0; j < c; j++) {
            for (int k = 0; k < r; k++) {
                if (!(i & (1 << (k * c + j)))) {
                    before = before * 10 + a[k * c + j];
                    if (k == r - 1) {
                        sum += before;
                        before = 0;
                    }
                } else {
                    sum += before;
                    before = 0;
                }
            }
        }

        M = max(M, sum);
    }

    cout << M;

    return 0;
}

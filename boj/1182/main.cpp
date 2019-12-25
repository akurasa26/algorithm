//
// Created by jelly on 25/12/2019.
//
#include <iostream>

using namespace std;
int a[20];


int main() {
    int n, s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m = 1 << n;


    int c = 0;
    for (int i = 1; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum += a[j];
            }
        }
        if (sum == s) {
            c++;
        }
    }

    cout << c;

    return 0;
}

//
// Created by jelly on 23/12/2019.
//
#include <iostream>

using namespace std;
int n;
char s[10][10];
int a[10];

bool check(int index) {
    for (int i = 0; i <= index; i++) {
        int sum = 0;
        for (int j = i; j <= index; j++) {
            sum += a[j];
        }
        char pmz = s[i][index];
        if (pmz == '+') {
            if (sum <= 0) {
                return false;
            }
        }

        if (pmz == '-') {
            if (sum >= 0) {
                return false;
            }
        }

        if (pmz == '0') {
            if (sum != 0) {
                return false;
            }
        }
    }

    return true;

}

bool go(int index) {
    if (index == n) {
        return true;
    }
    for (int i = -10; i <= 10; i++) {
        a[index] = i;
        if (check(index)) {
            if (go(index + 1)) {
                return true;
            }
        }
    }
    return false;
}


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cin >> s[i][j];
        }
    }

    go(0);

    for (int i = 0; i < n; i++) cout << a[i] << ' ';

    return 0;
}

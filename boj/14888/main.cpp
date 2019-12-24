//
// Created by jelly on 24/12/2019.
//
#include <iostream>

using namespace std;

int m = 1000000001;
int M = -1000000001;

int n;
int a[11];


void go(int before, int index, int su, int mi, int mul, int div) {
    if (!su && !mi && !mul && !div) {
        m = min(m, before);
        M = max(M, before);
        return;
    }
    if (su)
        go(before + a[index], index + 1, su - 1, mi, mul, div);
    if (mi)
        go(before - a[index], index + 1, su, mi - 1, mul, div);
    if (mul)
        go(before * a[index], index + 1, su, mi, mul - 1, div);
    if (div)
        go(before / a[index], index + 1, su, mi, mul, div - 1);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int su;
    int mi;
    int mul;
    int div;


    cin >> su;
    cin >> mi;
    cin >> mul;
    cin >> div;

    go(a[0], 1, su, mi, mul, div);

    cout << M << '\n' << m;

    return 0;
}

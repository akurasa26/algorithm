//
// Created by jelly on 25/11/2019.
//
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int f = a * b;
    int t;
    t = b % 10;
    cout << a * t << '\n';

    while (b /= 10) {
        t = b % 10;
        cout << a * t << '\n';
    }

    cout << f;

    return 0;
}

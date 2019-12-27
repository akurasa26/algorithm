//
// Created by jelly on 24/12/2019.
//
#include <iostream>

using namespace std;

long long d[91];

void fib(int n) {
    d[n] = d[n - 2] + d[n - 1];
}

int main() {

    d[0] = 0;
    d[1] = 1;
    d[2] = 1;
    for (int i = 3; i < 91; i++) {
        fib(i);
    }

    int n;
    cin >> n;

    cout << d[n];

    return 0;
}

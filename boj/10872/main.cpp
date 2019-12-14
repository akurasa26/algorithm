//
// Created by jelly on 14/12/2019.
//
#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n);

    return 0;
}

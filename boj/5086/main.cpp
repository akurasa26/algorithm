//
// Created by jelly on 05/01/2020.
//
#include <iostream>

using namespace std;

int main() {
    int a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) return 0;

        if (a > b) {
            int n = a % b;
            if (n == 0) cout << "multiple" << '\n';
            else cout << "neither" << '\n';
        } else {
            int n = b % a;
            if (n == 0) cout << "factor" << '\n';
            else cout << "neither" << '\n';
        }
    }
}
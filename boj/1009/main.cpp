//
// Created by jelly on 2019/12/30.
//
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long a, b;
        cin >> a >> b;
        long temp = 1;

        while (b--) {
            temp *= a;
            temp %= 10000;
        }

        temp %= 10;

        cout << (temp == 0 ? 10 : temp) << '\n';
    }

    return 0;
}

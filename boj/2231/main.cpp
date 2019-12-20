//
// Created by jelly on 17/12/2019.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i < n; i++) {
        int t = i;
        int sum = i;
        do {
            sum += t % 10;
        } while (t /= 10);

        if (sum == n) {
            cout << i;
            return 0;
        }
    }

    cout << 0;
    return 0;
}
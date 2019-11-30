//
// Created by jelly on 30/11/2019.
//
#include <iostream>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    if (c <= b) {
        cout << -1;
        return 0;
    }


    cout << (a / (c - b) + 1);

    return 0;
}

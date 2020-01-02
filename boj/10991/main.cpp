//
// Created by jelly on 02/01/2020.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) cout << ' ';
        cout << '*';

        for (int j = 0; j < (i * 2) + 1; j++) {
            if (j % 2 == 1)cout << '*';
            else cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}

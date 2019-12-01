//
// Created by jelly on 01/12/2019.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    n--;
    int count = 0;
    int plus = 0;
    while (n <= plus) {
        plus += 6;
        count++;
    }

    cout << count;

    return 0;
}

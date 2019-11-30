//
// Created by jelly on 30/11/2019.
//
#include <iostream>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    int count = 0;
    if (c <= b) {
        count = -1;
        cout << count;
        return 0;
    }

    while ((a + (count * b)) > (count * c)) {
        count++;
    }

    count++;
    cout << count;

    return 0;
}

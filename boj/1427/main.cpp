//
// Created by jelly on 19/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long n;
    cin >> n;
    int a[10];
    int count = 0;
    do {
        a[count] = n % 10;
        count++;
    } while (n /= 10);

    sort(a, a + count);

    for (int i = count - 1; i >= 0; i--) {
        cout << a[i];
    }

    return 0;
}

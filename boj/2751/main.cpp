//
// Created by jelly on 18/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1000000];

    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);
    for (int i = 0; i < n; i++) cout << a[i] << '\n';

    return 0;
}

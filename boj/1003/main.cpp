//
// Created by jelly on 23/12/2019.
//
#include <iostream>

using namespace std;
int a[41][2];

void fibonacci(int n) {
    a[n][0] = a[n - 1][0] + a[n - 2][0];
    a[n][1] = a[n - 1][1] + a[n - 2][1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    a[0][0] = 1;
    a[0][1] = 0;
    a[1][0] = 0;
    a[1][1] = 1;

    int n;
    cin >> n;

    for (int i = 2; i < 41; i++)
        fibonacci(i);

    while (n--) {
        int i;
        cin >> i;
        cout << a[i][0] << ' ' << a[i][1] << '\n';
    }

    return 0;
}

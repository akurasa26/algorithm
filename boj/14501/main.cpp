//
// Created by jelly on 20/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;

int n;
int t[16];
int p[16];

int ans = 0;

void go(int day, int sum) {
    if (day == n) {
        ans = max(ans, sum);
        return;
    }

    if (day > n) {
        return;
    }

    go(day + 1, sum);
    go(day + t[day], sum + p[day]);
}


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t[i] >> p[i];
    }

    go(0, 0);
    cout << ans;

    return 0;
}

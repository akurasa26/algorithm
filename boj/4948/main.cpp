//
// Created by jelly on 03/12/2019.
//
#include <iostream>

using namespace std;
bool d[246914];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    d[0] = true;
    d[1] = true;
    for (int i = 2; i < 246914; i++) {
        if (d[i]) continue;
        for (long j = i; j < 246914; j++) {
            long long index = j * i;
            if (index >= 246914) break;
            d[index] = true;
        }
    }
    int n = 1;
    int count = 0;
    while (cin >> n && n) {
        for (int i = n + 1; i <= 2 * n; i++) {
            if (!d[i]) count++;
        }
        cout << count << '\n';
        count = 0;
    }


    return 0;
}
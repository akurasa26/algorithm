//
// Created by jelly on 03/12/2019.
//
#include <iostream>

using namespace std;

bool d[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 2; i < 10001; ++i) d[i] = true;
    for (int i = 2; i < 10001; ++i) {
        if (!d[i]) continue;
        for (int j = i; j < 10001; ++j) {
            int index = j * i;
            if (index >= 10001) break;
            d[index] = false;
        }
    }

    int T;
    cin >> T;
    int a;
    while (T--) {
        int min = 999999;
        int ans = 999999;
        cin >> a;
        for (int i = 2; i <= (a / 2) + 1; ++i) {
            if (d[i] && d[a - i]) {
                if ((a - i) - i < min) {
                    if ((a - i - i) < 0) break;
                    min = (a - i) - i;
                    ans = i;
                }
            }
        }
        cout << ans << ' ' << a - ans << '\n';
    }

    return 0;
}

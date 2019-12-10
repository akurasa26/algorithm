//
// Created by jelly on 04/12/2019.
//
#include <iostream>

using namespace std;
bool b[10];

int main() {
    int n;
    cin >> n;

    int b_n;
    cin >> b_n;
    while (b_n--) {
        int b_c;
        cin >> b_c;
        b[b_c] = true;
    }
    int ans = abs(100 - n);

    for (int i = 0; i < 1000001; i++) {
        int m = i;
        bool broken = false;
        int count = 0;
        do {
            count++;
            if (b[m % 10]) {
                broken = true;
                break;
            }
        } while (m /= 10);

        if (broken) {
            continue;
        }
        ans = min(ans, abs(n - i) + count);
    }

    if (n == 0 && !b[0]) {
        cout << 1;
    } else {
        cout << ans;
    }
    return 0;
}

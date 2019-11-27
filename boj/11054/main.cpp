//
// Created by jelly on 27/11/2019.
//
#include <iostream>

using namespace std;

int a[1001];
int inc_d[1001];
int dec_d[1001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        inc_d[i] = 1;
        dec_d[i] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = (i - 1); j > 0; j--) {
            if ((a[j] < a[i]) && (inc_d[j] >= inc_d[i])) {
                inc_d[i] = inc_d[j] + 1;
            }
        }
    }

    for (int i = n; i > 0; i--) {
        for (int j = (i + 1); j <= n; j++) {
            if ((a[j] < a[i]) && (dec_d[j] >= dec_d[i])) {
                dec_d[i] = dec_d[j] + 1;
            }
        }
    }

    int max = 0;

    for (int i = 1; i <= n; i++) {
        int temp = inc_d[i] + dec_d[i] - 1;
        if (max < temp) {
            max = temp;
        }
    }

    cout << max;

    return 0;
}

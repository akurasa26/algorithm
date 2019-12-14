//
// Created by jelly on 03/12/2019.
//
#include <iostream>
#include <vector>

using namespace std;

int check(vector<string> &a) {
    int max_len = 0;
    for (int i = 0; i < a.size(); i++) {
        int len = 1;
        for (int j = 1; j < a.size(); j++) {
            if (a[i][j - 1] == a[i][j]) {
                len += 1;
            } else {
                len = 1;
            }
            if (max_len < len) {
                max_len = len;
            }
        }
    }
    for (int i = 0; i < a.size(); i++) {
        int len = 1;
        for (int j = 1; j < a.size(); j++) {
            if (a[j - 1][i] == a[j][i]) {
                len += 1;
            } else {
                len = 1;
            }
            if (max_len < len) {
                max_len = len;
            }
        }
    }
    return max_len;
}

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j && (a[i][j - 1] != a[i][j])) {
                swap(a[i][j], a[i][j - 1]);
                int temp = check(a);
                if (ans < temp) ans = temp;
                swap(a[i][j], a[i][j - 1]);
            }
            if (i && (a[i - 1][j] != a[i][j])) {
                swap(a[i - 1][j], a[i][j]);
                int temp = check(a);
                if (ans < temp) ans = temp;
                swap(a[i - 1][j], a[i][j]);
            }
        }
    }

    cout << ans;

    return 0;
}

//
// Created by jelly on 17/12/2019.
//
#include <iostream>

using namespace std;
short aa[10002];
short bb[10002];
short answer[10002];

int main() {
    string a, b;
    cin >> a >> b;

    int j = 0;
    for (int i = a.size() - 1; i >= 0; i--, j++) {
        aa[j] = (short) a[i] - 48;
    }
    j = 0;
    for (int i = b.size() - 1; i >= 0; i--, j++) {
        bb[j] = (short) b[i] - 48;
    }

    int s = max(a.size(), b.size());
    int before = 0;
    for (int i = 0; i <= s; i++) {
        int sum = (before + aa[i] + bb[i]);
        answer[i] = sum % 10;
        before = sum / 10;
    }

    if (answer[s]) cout << answer[s];
    for (int i = s - 1; i >= 0; i--) {
        cout << answer[i];
    }

    return 0;
}

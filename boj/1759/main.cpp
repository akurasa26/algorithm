//
// Created by jelly on 18/12/2019.
//
#include <iostream>
#include <algorithm>

using namespace std;
char a[15];
char before[15];
char ans[15];
char mo[5] = {'a', 'i', 'e', 'o', 'u'};

void password(int index, int curr, int l, int c) {
    if (index >= c) return;

    if (curr == l) {
        for (int i = 1; i < l; i++) {
            if (ans[i] <= ans[i - 1]) return;
        }
        bool matched = true;
        for (int i = 0; i < l; i++) {
            if (before[i] != ans[i]) {
                matched = false;
                break;
            }
        }
        if (matched) return;
        int mo_count = 0;
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < 5; j++) {
                if (ans[i] == mo[j]) mo_count++;
            }
        }

        if (l - mo_count < 2 || mo_count < 1) {
            return;
        }

        for (int i = 0; i < l; i++) {
            cout << ans[i];
        }

        for (int i = 0; i < l; i++) {
            before[i] = ans[i];
        }

        cout << "\n";
        return;
    }

    ans[curr] = a[index];
    for (int i = 0; i < c; i++) {
        password(index + i, curr + 1, l, c);
    }

}

int main() {
    int l, c;
    cin >> l >> c;
    for (int i = 0; i < c; i++) {
        cin >> a[i];
    }

    sort(a, a + c);
    for (int i = 0; i < c; i++)
        password(i, 0, l, c);

    return 0;
}

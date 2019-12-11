//
// Created by jelly on 11/12/2019.
//
#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>

using namespace std;

int a[10];
bool b[10];
int c[10];
set<string> s;

void answer(int index, int n, int m) {
    if (index == m) {
        string res = "";

        for (int i = 0; i < m; i++) {
            res.append(to_string(c[i]));
            res.append(" ");
        }
        res.append("\n");
        pair<set<string>::iterator, bool> pr = s.insert(res);
        if (pr.second)cout << res;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (b[i]) continue;
        b[i] = true;
        c[index] = a[i];
        answer(index + 1, n, m);
        b[i] = false;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    answer(0, n, m);
}
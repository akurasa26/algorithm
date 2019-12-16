//
// Created by jelly on 13/12/2019.
//
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;
int n[8];
bool b[8];
int a[8];
set<string> answers;

void answer(int index, int pn, int end) {
    if (index == end + 1) {
        string s = "";
        for (int i = 1; i < index; i++) {
            s.append(to_string(a[i]));
            s.append(" ");
        }
        s.append("\n");
        pair<set<string>::iterator, bool> pr = answers.insert(s);
        if (pr.second) cout << s;
        return;
    }

    for (int i = 0; i < pn; i++) {
        a[index] = n[i];
        answer(index + 1, pn, end);
    }
}


int main() {
    int pn, pm;

    cin >> pn >> pm;

    for (int i = 0; i < pn; i++) {
        cin >> n[i];
    }

    sort(n, n + pn);

    answer(1, pn, pm);

    return 0;
}
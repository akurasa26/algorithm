//
// Created by jelly on 2020/01/07.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Meeting {
    int start;
    int end;
    int d;
};

vector<Meeting> v;

bool compare(Meeting a, Meeting b) {
    if (a.start == b.start) {
        return a.end < b.end;
    }
    return a.start < b.start;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        Meeting a;
        cin >> a.start >> a.end;
        a.d = 1;
        v.push_back(a);
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 1; i < n; i++) {
        Meeting &a = v[i];
        for (int j = i - 1; j >= 0; j--) {
            Meeting &b = v[j];
            if ((b.end <= a.start) && (b.d + 1 > a.d)) {
                a.d = b.d + 1;
            }
        }
    }
    int m = 0;
    for (int i = 0; i < n; i++) {
        m = max(v[i].d, m);
    }
    cout << m;
    return 0;
}

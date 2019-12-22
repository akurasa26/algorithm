//
// Created by jelly on 22/12/2019.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int s[20][20];
int n;
int ans = 20 * 20 * 100 + 1;
vector<int> a;
vector<int> b;

int go(int index) {
    if (index == n && a.size() > 0 && b.size() > 0) {
        int a_sum = 0;
        int b_sum = 0;
        for (int i : a) {
            for (int j : a) {
                if (i == j) continue;
                a_sum += s[i][j];
            }
        }
        for (int i : b) {
            for (int j : b) {
                if (i == j) continue;
                b_sum += s[i][j];
            }
        }

        return abs(a_sum - b_sum);
    }

    if (a.size() == n || b.size() == n)
        return 20 * 20 * 100 + 1;

    a.push_back(index);
    ans = min(go(index + 1), ans);
    a.pop_back();
    b.push_back(index);
    ans = min(go(index + 1), ans);
    b.pop_back();

    return ans;
}


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> s[i][j];
        }
    }

    ans = min(go(0), ans);

    cout << ans;
    return 0;
}
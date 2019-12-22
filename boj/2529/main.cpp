//
// Created by jelly on 22/12/2019.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
long n;
long m = 0x7fffffffffffffffL;
long M = -1L;
vector<char> c;
bool coordinates[10] = {false,};

long ans[10] = {0,};

void go(int index, long *ans) {
    if (index == n + 1) {
        long sum = 0;
        for (int i = n; i >= 0; i--) {
            sum += ans[n - i] * pow(10, i);
        }
        m = min(m, sum);
        M = max(M, sum);
        return;
    }

    char ch = ' ';
    if (index)
        ch = c[index - 1];
    for (int i = 0; i < 10; i++) {
        if (coordinates[i]) continue;
        if (index) {
            if (ch == '>') {
                if (ans[index - 1] < i) {
                    continue;
                }
            } else {
                if (ans[index - 1] > i) {
                    continue;
                }
            }
        }
        coordinates[i] = true;
        ans[index] = i;
        go(index + 1, ans);
        coordinates[i] = false;
    }
}


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        char co;
        cin >> co;
        c.push_back(co);
    }


    go(0, ans);

    cout << M << endl;
    if (m < pow(10, n)) cout << 0;
    cout << m << endl;

    return 0;
}

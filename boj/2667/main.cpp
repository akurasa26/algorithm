//
// Created by jelly on 2019/12/29.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
bool b[25][25];
int a[25][25];

int ans[625];

int dh[4] = {0, 0, -1, 1};
int dw[4] = {-1, 1, 0, 0};

int c = 0;

vector<int> v;

void dfs(int h, int w) {
    if (h < 0 || w < 0 || h == n || w == n) return;
    if (!a[h][w] && b[h][w]) {
        a[h][w] = c;
        for (int i = 0; i < 4; i++) {
            dfs(h + dh[i], w + dw[i]);
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            b[i][j] = s[j] - 48;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!a[i][j] && b[i][j]) {
                c++;
                dfs(i, j);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j])
                ++ans[a[i][j]];
        }
    }
    sort(ans, ans + c + 1);
    cout << c << '\n';
    for (int i = 1; i <= c; i++) {
        cout << ans[i] << '\n';
    }

    return 0;
}
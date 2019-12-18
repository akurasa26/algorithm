//
// Created by jelly on 17/12/2019.
//
#include <iostream>
#include <vector>

using namespace std;

vector<string> v;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        v.push_back(str);
    }

    int minCount = 64;

    for (int i = 0; i <= m - 8; i++) {
        for (int j = 0; j <= n - 8; j++) {
            int count = 0;
            for (int k = 0; k < 8; k++) {
                for (int l = 0; l < 8; l++) {
                    int ik = i + k;
                    int jl = j + l;
                    if (((ik % 2) == 1 && (jl % 2) == 1)
                        || ((ik % 2) == 0 && (jl % 2) == 0)) {
                        if (v[jl][ik] == 'B') count++;
                    } else {
                        if (v[jl][ik] == 'W') count++;
                    }
                }
            }
            minCount = min(min(count, minCount), 64 - count);
        }
    }

    cout << minCount;
    return 0;
}


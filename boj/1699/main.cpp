//
// Created by jelly on 23/11/2019.
//
#include <iostream>
#include <cmath>
using namespace std;
long long d[100001];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    d[0] = 1;
    for(int i = 1; i <= n; i++) {
        d[i] = i;
        for(long j = 1; (j * j) <= i; j++) {
            if(d[i] > (d[i - (j * j)] + 1)) {
                if(i==100) cout << j;
                d[i] = d[i - (j * j)] + 1;
            }
        }

    }
    cout << d[n];
}

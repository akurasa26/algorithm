#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long d[91][2];
    int n;
    cin >> n;

    d[0][0] = 0;
    d[0][1] = 0;
    d[1][0] = 0;
    d[1][1] = 1;

    for(int i = 2; i <= n; i++) {
        d[i][0] = d[i-1][1] + d[i-1][0];
        d[i][1] = d[i-1][0];
    }

    cout << d[n][1] + d[n][0];
}
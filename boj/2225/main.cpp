#include <iostream>
#include <cmath>
using namespace std;
unsigned long long d [201][201];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    d[0][0] = 1LL;
    unsigned long long mod = 1000000000ULL;
    for(int i=1; i<=k; i++) {
        for(int j=0; j<=n; j++) {
            for (int l=0; l<=j; l++) {
                d[i][j] += d[i-1][j-l];
                d[i][j] %= mod;
            }
        }
    }
    cout << d[k][n]  << '\n';


    return 0;
}
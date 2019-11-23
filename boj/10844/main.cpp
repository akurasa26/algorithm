#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int d[101][10];
    int n;
    cin >> n;
    d[0][0] = 0;
    for(int i = 1; i < 10; i++) d[0][i] = 1;
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < 10; j++) {
            d[i][j] = 0;
            if(j != 0)
                d[i][j] += d[i-1][j-1] % 1000000000;
            if(j != 9)
                d[i][j] += d[i-1][j+1] % 1000000000;
            d[i][j] %= 1000000000;
        }
    }
    int sum = 0;
    for(int i = 0; i < 10; i++) {
        sum += (d[n-1][i] % 1000000000);
        sum %= 1000000000;
    }
    cout << (sum % 1000000000);
}
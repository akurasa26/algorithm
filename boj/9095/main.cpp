#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int memo[12];
    memo[0] = 0;
    memo[1] = 1;
    memo[2] = 2;
    memo[3] = 4;
    for(int i = 4; i < 12; i++) {
        memo[i] = (memo[i - 3] + memo[i - 2] + memo[i - 1]);
    }
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << memo[n] << '\n';
    }
}


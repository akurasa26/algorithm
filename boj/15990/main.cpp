#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long memo[100001][4];
    memo[1][1] = 1;
    memo[1][2] = 0;
    memo[1][3] = 0;
    memo[1][0] = 1;
    memo[2][1] = 0;
    memo[2][2] = 1;
    memo[2][3] = 0;
    memo[2][0] = 1;
    memo[3][1] = 1;
    memo[3][2] = 1;
    memo[3][3] = 1;
    memo[3][0] = 3;


    for(int i = 4; i < 100001; i++) {
        memo[i][1] = (memo[i-1][2] + memo[i-1][3]);
        memo[i][1] = memo[i][1] > 1000000009 ? memo[i][1] % 1000000009 : memo[i][1];

        memo[i][2] = (memo[i-2][1] + memo[i-2][3]) % 1000000009;
        memo[i][2] = memo[i][2] > 1000000009 ? memo[i][2] % 1000000009 : memo[i][2];

        memo[i][3] = (memo[i-3][1] + memo[i-3][2]) % 1000000009;
        memo[i][3] = memo[i][3] > 1000000009 ? memo[i][3] % 1000000009 : memo[i][3];

        memo[i][0] = (memo[i][1] + memo[i][2] + memo[i][3]) % 1000000009;
    }

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << memo[n][0] << '\n';
    }
}


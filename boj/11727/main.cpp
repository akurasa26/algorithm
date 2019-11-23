#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int memo[1001];
    memo[0] = 0;
    memo[1] = 1;
    memo[2] = 3;
    for(int i = 3; i < 1001; i++) {
        memo[i] = (memo[i - 1] + memo[i - 2] + memo[i - 2]) % 10007;
    }
    int n;
    cin >> n;
    cout << memo[n];
}


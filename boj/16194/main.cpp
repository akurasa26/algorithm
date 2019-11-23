#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int p[10001];
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++) {
        cin >> p[i];
    }

    int memo[10001];
    for(int i = 1; i <= T; i++) {
        memo[i] = INT32_MAX;
    }
    for(int i = 1; i <= T; i++) {
        for(int j =1; j <= i; j++) {
            memo[i] = min(memo[i], memo[i-j] + p[j]);
        }
    }
    cout << memo[T];
    return 0;
}


#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    std::cin >> n;
    int memo[1000001];

    memo[1] = 0;
    memo[2] = 1;
    memo[3] = 1;

    for(int i = 4; i <= n; i++) {
        int min = INT32_MAX;
        if(i % 2 == 0) {
            min = memo[i / 2] + 1;
        }

        if(i % 3 == 0) {
            min = min > (memo[i / 3] + 1) ? (memo[i / 3] + 1) : min;
        }

        min = min > (memo[i - 1] + 1) ? (memo[i-1] + 1) : min;
        memo[i] = min;
    }
    std::cout << memo[n];
}


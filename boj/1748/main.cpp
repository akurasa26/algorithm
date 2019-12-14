//
// Created by jelly on 10/12/2019.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        int j = i;
        int count = 0;
        do {
            count++;
        } while (j /= 10);
        sum += count;
    }
    cout << sum;
    return 0;
}
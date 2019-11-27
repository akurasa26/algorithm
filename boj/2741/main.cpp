//
// Created by jelly on 25/11/2019.
//
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int n = 1;
    while(n <= t) {
        cout << n++ << '\n';
    }

    return 0;
}
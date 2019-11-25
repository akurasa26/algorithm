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
    int a, b;
    while(t--) {
        cin >> a >> b;
        cout << a + b << '\n';
    }

    return 0;
}
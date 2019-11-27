//
// Created by jelly on 25/11/2019.
//
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a;

    for(int i = 0; i < (n - 1); i++) {
        cin >> a;
        if(a < x) cout << a << ' ';
    }
    cin >> a;
    if(a < x) cout << a;

    return 0;
}
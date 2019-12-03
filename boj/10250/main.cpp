//
// Created by jelly on 01/12/2019.
//
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int h, w, n;
    while (t--) {
        cin >> h >> w >> n;
        int an_h = (n % h);
        int an_w = (n / h) + 1;
        if (an_h == 0) {
            an_h = h;
            an_w--;
        }
        cout << an_h;
        if (an_w < 10) cout << 0;
        cout << an_w << '\n';
    }

    return 0;
}

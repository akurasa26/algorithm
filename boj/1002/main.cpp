//
// Created by jelly on 12/12/2019.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        double x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        double px = pow(x1 - x2, 2);
        double py = pow(y1 - y2, 2);
        double pd = px + py;

        if (x1 == x2 && y1 == y2 && r1 == r2) {
            cout << -1 << '\n';
            continue;
        }

        if (pow(r1 - r2, 2) < pd && pd < pow(r1 + r2, 2)) {
            cout << 2 << '\n';
            continue;
        }

        if (pow(r1 + r2, 2) == pd || pow(r1 - r2, 2) == pd) {
            cout << 1 << '\n';
            continue;
        }

        if ((pd - pow(r1, 2) == pow(r2, 2)) || (pd - pow(r2, 2) == pow(r1, 2))) {
            cout << 1 << '\n';
            continue;
        }

        if (pow(r1 + r2, 2) < pd) {
            cout << 0 << '\n';
            continue;
        }

        if (pow(r1 - r2, 2) > pd) {
            cout << 0 << '\n';
            continue;
        }
    }

    return 0;
}

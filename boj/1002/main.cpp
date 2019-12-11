//
// Created by jelly on 11/12/2019.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        if ((x1 == x2) && (y1 == y2) && (r1 == r2)) {
            cout << -1 << '\n';
            continue;
        }

        int x11 = x1 + r1;
        int x12 = x1 - r1;
        int x21 = x2 + r2;
        int x22 = x2 - r2;

        int y11 = y1 + r1;
        int y12 = y1 - r1;
        int y21 = y2 + r2;
        int y22 = y2 - r2;

        if ((x11 == x21) || (x11 == x22) || (x12 == x21) || (x12 == x22)) {
            cout << 1 << '\n';
            continue;
        }

        if ((y11 == y21) || (y11 == y22) || (y12 == y21) || (y12 == y22)) {
            cout << 1 << '\n';
            continue;
        }

        if ((x11 > x21) && (x12 < x22) && (y11 > y21) && (y12 < y22)) {
            cout << 0 << '\n';
            continue;
        }

        if ((x21 > x11) && (x22 < x12) && (y21 > y11) && (y22 < y12)) {
            cout << 0 << '\n';
            continue;
        }


        int d1;
        if (x1 > x2) {
            d1 = x1 - x2;
            if (d1 < r1 + r2) {
                cout << 0 << '\n';
                continue;
            }
        } else if (x2 > x1) {
            d1 = x2 - x1;
            if (d1 < r1 + r2) {
                cout << 0 << '\n';
                continue;
            }
        }

        if (y1 > y2) {
            d1 = y1 - y2;
            if (d1 < r1 + r2) {
                cout << 0 << '\n';
                continue;
            }
        } else if (y2 > y1) {
            d1 = y2 - y1;
            if (d1 < r1 + r2) {
                cout << 0 << '\n';
                continue;
            }
        }

        cout << 2 << '\n';
    }

    return 0;
}


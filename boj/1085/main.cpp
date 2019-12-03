//
// Created by jelly on 03/12/2019.
//
#include <iostream>

using namespace std;

int main() {
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int min = x;

    if (min > y) min = y;
    if (min > (w - x)) min = w - x;
    if (min > (h - y)) min = h - y;

    cout << min;
    return 0;
}

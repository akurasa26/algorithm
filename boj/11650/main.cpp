//
// Created by jelly on 19/12/2019.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
struct Point {
    int x;
    int y;
};
vector<Point> v;

bool compare(Point &a, Point &b) {
    if (a.x == b.x) {
        if (a.y < b.y) {
            return true;
        } else {
            return false;
        }
    }

    if (a.x < b.x) {
        return true;
    } else {
        return false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        Point p;
        cin >> p.x >> p.y;
        v.push_back(p);
    }
    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << (v[i].x) << ' ' << v[i].y << '\n';

    }
    return 0;
}

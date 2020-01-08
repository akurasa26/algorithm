//
// Created by jelly on 2020/01/06.
//
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int a[27][2];
bool check[27];


void goPreorder(int i) {
    if (!check[i]) {
        v.push_back(i);
        check[i] = true;
    }

    if (a[i][0] && !check[a[i][0]]) {
        goPreorder(a[i][0]);
    }

    if (a[i][1] && !check[a[i][1]]) {
        goPreorder(a[i][1]);
    }
}

void goMid(int i) {
    if (!check[i]) {
        check[i] = true;
    }
    if (a[i][0] && !check[a[i][0]]) {
        goPreorder(a[i][0]);
    }

    if (a[i][1] && !check[a[i][1]]) {
        goPreorder(a[i][1]);
    }
    v.push_back(i);

}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char root, left, right;
        cin >> root >> left >> right;
        root -= 64;
        left -= 64;
        right -= 64;

        if (left > 0) {
            a[root][0] = left;
        }

        if (right > 0) {
            a[root][1] = right;
        }
    }

    goPreorder(1);
    for (int c : v) {
        cout << char(c + 64);
    }
    cout << endl;
    memset(check, false, sizeof(check));
    v.clear();
    goMid(1);
    for (int c : v) {
        cout << char(c + 64);
    }
    cout << endl;


    return 0;
}



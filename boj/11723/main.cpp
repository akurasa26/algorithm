//
// Created by jelly on 25/12/2019.
//
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;

    int i = 0;
    string cmd;
    int n = 0;

    while (t--) {
        cin >> cmd;

        if (cmd == "add") {
            cin >> n;
            i = i | (1 << (n - 1));
        } else if (cmd == "remove") {
            cin >> n;
            i = i & ~(1 << (n - 1));
        } else if (cmd == "check") {
            cin >> n;
            int temp = i & (1 << (n - 1));
            if (temp != 0) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if (cmd == "toggle") {
            cin >> n;
            i = i ^ (1 << (n - 1));
        } else if (cmd == "all") {
            i = 2147483647;
        } else if (cmd == "empty") {
            i = 0;
        }
    }


    return 0;
}

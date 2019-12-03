//
// Created by jelly on 28/11/2019.
//
#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;

    int r;
    string str;

    while(t--) {
        cin >> r;
        cin >> str;
        for(int i = 0; i < str.size(); i++) {
            for(int j = 0; j < r; j++) {
                cout << str[i];
            }
        }
        cout << '\n';
    }

    return 0;
}
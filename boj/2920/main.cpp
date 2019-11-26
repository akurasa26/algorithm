//
// Created by jelly on 26/11/2019.
//

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[8];
    bool asc = false, desc = false;
    for (int i = 0; i < 8; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < 8; i++) {
        if(a[i-1] < a[i]) {
            asc = true;
        } else {
            desc = true;
        }
    }

    if(asc && desc) {
        cout << "mixed";
    } else if(asc) {
        cout << "ascending";
    } else {
        cout << "descending";
    }

    return 0;
}
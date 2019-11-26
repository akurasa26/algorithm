//
// Created by jelly on 26/11/2019.
//

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    ++t;
    long a;
    int min = 10000001, max = -10000001;
    while(--t) {
        cin >> a;
        if(a > max) max = a;
        if(a < min) min = a;
    }

    cout << min << " " << max;
    return 0;
}
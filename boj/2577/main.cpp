//
// Created by jelly on 26/11/2019.
//

#include <iostream>
using namespace std;
int d[10];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int multi = a * b * c;

    d[multi % 10] += 1;
    while(multi /= 10) {
        d[multi % 10] += 1;
    }


    for(int i = 0; i < 10; i++) {
        cout << d[i] << '\n';
    }


    return 0;
}
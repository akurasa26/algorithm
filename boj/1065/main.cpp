//
// Created by jelly on 26/11/2019.
//

#include <iostream>
using namespace std;
bool checkHanSu(int n) {
    if(n < 100) return true;

    int a = n;
    int b[4];
    int jari = 0;
    do {
        b[jari] = a % 10;
        jari++;
    } while(a /= 10);

    int diff = b[1] - b[0];

    for(int i = 2; i < jari; i++) {
        if(diff != (b[i] - b[i-1])) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(checkHanSu(i)) count++;
    }

    cout << count;
    return 0;
}
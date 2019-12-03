//
// Created by jelly on 01/12/2019.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = -1;
    int b = -1;

    for(int i = (n / 5); i >= 0; i--) {
        int remainder = n - (i * 5);
        if(remainder % 3 == 0) {
            a = i;
            b = remainder / 3;
            break;
        }
    }

    if(b == -1) {
        cout << -1;
    } else {
        cout << a + b;
    }


    return 0;
}
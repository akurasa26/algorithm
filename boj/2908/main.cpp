//
// Created by jelly on 28/11/2019.
//

#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int c = 0, d = 0;
    for(int i = 0; i < a.size(); i++) {
        int temp = 1;
        for(int j = 0; j < i; j++) temp *= 10;
        temp *= (a[i] - 48);
        c += temp;
    }

    for(int i = 0; i< b.size(); i++) {
        int temp = 1;
        for(int j = 0; j < i; j++) temp *= 10;
        temp *= (b[i] - 48);
        d += temp;
    }

    if(c > d) {
        cout << c;
    } else {
        cout << d;
    }

    return 0;
}
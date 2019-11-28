//
// Created by jelly on 28/11/2019.
//
#include <iostream>
using namespace std;
int a[91];
int main() {
    int count = 0;
    int n = 3;
    for(int i = 65; i < 80; i++) {
        count++;
        a[i] = n;
        if(count == 3) {
            count = 0;
            n++;
        }
    }
    for(int i = 80; i < 84; i++) {
        count++;
        a[i] = n;
        if(count == 4) {
            count = 0;
            n++;
        }
    }
    for(int i = 84; i < 90; i++) {
        count++;
        a[i] = n;
        if(count == 3) {
            count = 0;
            n++;
        }
    }

    a[90] = 10;

    string str;
    cin >> str;
    int sum = 0;
    for(int i = 0; i < str.size(); i++) {
        sum += a[str[i]];
    }

    cout << sum;
    return 0;
}

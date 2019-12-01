//
// Created by jelly on 01/12/2019.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    long long plus = 0;
    long long temp = 0;

    while (n > temp) {
        plus += 1;
        temp += plus;
        count++;
    }

    int i = count;
    int j = 1;

    for (int k = 0; k < (temp - n); k++) {
        i--;
        j++;
    }
    if (count % 2 == 0) {
        cout << i << '/' << j;
    } else {
        cout << j << '/' << i;
    }
    return 0;
}
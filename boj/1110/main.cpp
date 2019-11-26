//
// Created by jelly on 25/11/2019.
//
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int n = N;

    int a, b = 0;
    int count = 0;

    do {
        a = n / 10;
        b = n % 10;
        n = a + b;
        n = b * 10  + (n % 10);
        count++;

    } while (n != N);

    cout << count;
    return 0;
}
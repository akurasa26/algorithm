//
// Created by jelly on 18/12/2019.
//
#include <iostream>

using namespace std;

int main() {
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    int temp = 0;
    for (int j = 0; j < n; j++) {
        for (int i = 1; i < n; i++) {
            if (a[i - 1] > a[i]) {
                temp = a[i - 1];
                a[i - 1] = a[i];
                a[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) cout << a[i] << '\n';

    return 0;
}

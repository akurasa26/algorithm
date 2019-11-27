//
// Created by jelly on 26/11/2019.
//
#include <iostream>
using namespace std;
int d[1000];
int a[1000];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    double max = 0;
    double sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > max) max = a[i];
    }

    for(int i = 0; i < n; i++) {
        sum += ((a[i] / max) * 100);
    }

    cout << (sum / n);


    return 0;
}


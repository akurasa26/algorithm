//
// Created by jelly on 18/12/2019.
//
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int a[8001];

int main() {
    int t;
    cin >> t;
    long double sum = 0;

    int m = 9999, M = -9999;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        m = min(m, n);
        M = max(M, n);
        sum += n;
        a[n + 4000]++;
    }

    //중간 값 위치
    int mid = t / 2 + 1;
    //중간 값
    int mid_n = -9999;
    for (int i = 0; i < 8001; i++) {
        mid -= a[i];
        if (mid <= 0) {
            mid_n = i - 4000;
            break;
        }
    }

    // 최빈값
    int max_frequency = 0;
    for (int i = 0; i < 8001; i++) {
        max_frequency = max(max_frequency, a[i]);
    }

    int m_f_n = -9999;
    bool second = false;
    for (int i = 0; i < 8001; i++) {
        if (a[i] == max_frequency) {
            m_f_n = i - 4000;
            if (second) break;
            second = true;
        }
    }


    cout << round(sum / t) << endl;
    cout << mid_n << endl;
    cout << m_f_n << endl;
    cout << M - m << endl;
    return 0;
}

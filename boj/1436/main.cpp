//
// Created by jelly on 18/12/2019.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int m = 0;
    for (long i = 666; i < 0x7fffffffffffffffL; i++) {
        int temp = i;
        int six_count = 0;
        do {
            if (temp % 10 == 6) {
                six_count++;
            } else {
                six_count = 0;
            }
            if (six_count == 3) {
                m++;
                break;
            }
        } while (temp /= 10);

        if (n == m) {
            cout << i;
            break;
        }
    }

    return 0;
}

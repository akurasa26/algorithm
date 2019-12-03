//
// Created by jelly on 03/12/2019.
//
#include <iostream>

using namespace std;

bool d[10001] = {false,};

int main() {
    int a, b;
    d[0] = true;
    d[1] = true;
    for (int i = 2; i < 10001; i++) {
        for (int j = i; j < 10001; j++) {
            int index = i * j;
            if (index > 10001) break;
            d[index] = true;
        }
    }
    cin >> a >> b;
    int min = -1;
    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (!d[i]) {
            sum += i;
            if (min == -1) min = i;
        }
    }

    if (min == -1) {
        cout << -1;
    } else {
        cout << sum << '\n' << min;
    }

    return 0;
}

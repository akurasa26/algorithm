//
// Created by jelly on 04/12/2019.
//
#include <iostream>

using namespace std;

int main() {
    int a = 1, b = 1, c = 1;
    int e, s, m;
    cin >> e >> s >> m;
    int year = 1;
    while (a != e || b != s || c != m) {
        year++;
        a++;
        b++;
        c++;
        if (a == 16) a = 1;
        if (b == 29) b = 1;
        if (c == 20) c = 1;
    }

    cout << year;
    return 0;
}

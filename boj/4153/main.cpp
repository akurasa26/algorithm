//
// Created by jelly on 03/12/2019.
//
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    while (1) {
        cin >> a >> b >> c;
        int M = max(max(a, b), c);
        int sum = 0;
        if (a != M)
            sum += (a * a);
        if (b != M)
            sum += (b * b);
        if (c != M)
            sum += (c * c);

    }

    return 0;
}

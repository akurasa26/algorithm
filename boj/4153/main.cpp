//
// Created by jelly on 03/12/2019.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    int M;
    int sum;
    while (1) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break;
        M = max(max(a, b), c);
        sum = 0;
        if (a != M)
            sum += (a * a);
        if (b != M)
            sum += (b * b);
        if (c != M)
            sum += (c * c);

        if ((sqrt(sum) * sqrt(sum)) == (M * M)) cout << "right";
        else cout << "wrong";
        cout << '\n';
    }

    return 0;
}

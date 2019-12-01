//
// Created by jelly on 01/12/2019.
//
#include <iostream>

using namespace std;

int main() {
    int a, b, v;
    cin >> a >> b >> v;

    int real_v = v - b;
    int minus = a - b;

    int answer = (real_v % minus) ? ((real_v / minus) + 1) : (real_v / minus);
    cout << answer;

    return 0;
}

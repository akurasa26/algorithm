//
// Created by jelly on 02/12/2019.
//
#include <iostream>
#include <cmath>

using namespace std;

// 1 부터 n/2 그냥 ++ 로가는거에 * 2
// 1
// 1 1
// 1 1 1
// 1 2 1
// 1 2 1 1
// 1 2 2 1
// 1 2 2 1 1
// 1 2 2 2 1
// 1 2 3 2 1
// 1 2 3 2 1 1
// 1 2 3 2 2 1
// 1 2 3 3 2 1
// 1 2 3 3 2 1 1
// 1 2 3 3 2 2 1
// 1 2 3 3 3 2 1
// 1 2 3 4 3 2 1
long long answer(int n) {
    for (long long i = 1; i < 4000000000; i++) {
        long long temp = i * i + i;

        if (n <= temp) {
            if (n > (temp - i))
                return i * 2;
            else
                return (i * 2) - 1;
        }
    }
    return -1;
}


int main() {
    long long T;
    cin >> T;
    long long a, b;
    while (T--) {
        cin >> a >> b;
        cout << answer(b - a) << '\n';
    }

//    cout << answer(1) << ' ' << (answer(1) == 1) << '\n';
//    cout << answer(2) << ' ' << (answer(2) == 2) << '\n';
//    cout << answer(3) << ' ' << (answer(3) == 3) << '\n';
//    cout << answer(4) << ' ' << (answer(4) == 3) << '\n';
//    cout << answer(5) << ' ' << (answer(5) == 4) << '\n';
//    cout << answer(6) << ' ' << (answer(6) == 4) << '\n';
//    cout << answer(7) << ' ' << (answer(7) == 5) << '\n';
//    cout << answer(8) << ' ' << (answer(8) == 5) << '\n';
//    cout << answer(9) << ' ' << (answer(9) == 5) << '\n';
//    cout << answer(10) << ' ' << (answer(10) == 6) << '\n';
//    cout << answer(11) << ' ' << (answer(11) == 6) << '\n';
//    cout << answer(21) << ' ' << (answer(21) == 9) << '\n';



    return 0;
}

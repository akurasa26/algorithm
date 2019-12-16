//
// Created by jelly on 03/12/2019.
//
#include <iostream>
#include <vector>

using namespace std;
vector<string> v;
int c;

void move(int i, int k) {
    ++c;
    v.push_back(to_string(i) + " " + to_string(k) + "\n");
}

void hanoi(int n, int i, int j, int k) {
    if (n == 1) {
        move(i, k);
    } else {
        hanoi(n - 1, i, k, j);
        move(i, k);
        hanoi(n - 1, j, i, k);
    }

}

int main() {
    int n;
    cin >> n;
    hanoi(n, 1, 2, 3);
    cout << c << "\n";
    for (const auto &s : v) {
        cout << s;
    }
}

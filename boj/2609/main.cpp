#include <iostream>


int gcd(int a, int b) {
    return b ? gcd(b, a % b): a;
}

int lcm(int a, int b) {
    return gcd(a, b) * (a / (gcd(a, b))) * (b / (gcd(a, b)));
}

int main() {
    int a, b;
    std::ios_base::sync_with_stdio(false);
    std::cin >> a >> b;
    std::cout << gcd(a, b) << ' ' << lcm(a, b);

    return 0;
}
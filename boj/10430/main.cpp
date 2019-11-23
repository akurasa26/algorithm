#include <iostream>

int main() {
    int a, b, c;
    std::ios_base::sync_with_stdio(false);
    std::cin >> a >> b >> c;
    std::cout << (a + b) % c << '\n';
    std::cout << (a + b) % c << '\n';
    std::cout << (a * b) % c << '\n';
    std::cout << (a * b) % c << '\n';

    return 0;
}
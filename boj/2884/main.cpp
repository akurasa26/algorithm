#include <iostream>

int main() {
    int h, m;

    std::cin >> h >> m;

    m = m - 45;
    if(m < 0) {
        h--;
        m = 60 + m;
    }

    if(h < 0) {
        h = 23;
    }

    std::cout << h << ' ' << m << '\n';
    return 0;
}
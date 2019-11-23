#include <iostream>
#include <cmath>

int main() {
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int min, max;
    std::cin >> min >> max;
    bool *is_not_prime = new bool[max + 1];
    for (int i = 2; i <= max; i++) {
        if(is_not_prime[i]) continue;
        if(i > sqrt(max)) break;

        int j = i;
        int i_j = i * j;
        while (i_j <= max) {
            is_not_prime[i_j] = true;
            j++;
            i_j = i * j;
        }
    }

    for (int i = min > 1 ? min : 2; i <= max; i++) {
        if (!is_not_prime[i]) {
            std::cout << i << '\n';
        }
    }
}

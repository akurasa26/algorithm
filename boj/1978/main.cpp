#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n == 1) return false;
    int i = 2;
    int max = sqrt(n);
    while (i <= max) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

int main() {
    int N;
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::cin >> N;

    int n;
    int count = 0;
    while (N--) {
        std::cin >> n;
        if (isPrime(n)) {
            count++;
        }
    }
    std::cout << count;
}

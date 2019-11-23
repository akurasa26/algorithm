#include <iostream>
#include <cmath>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);
    const int max = 1000000;

    bool *not_primes = new bool[max + 1];
    not_primes[0] = true;
    not_primes[1] = true;
    for(int i = 2; i <= max; i++) {
        if(not_primes[i]) continue;
        if(i > sqrt(max)) break;

        int j = i;
        int i_j = i * j;
        while(i_j < max) {
            not_primes[i_j] = true;
            j++;
            i_j = i * j;
        }
    }
    not_primes[2] = true;

    int n;
    while(true){
        next:
        std::cin >> n;
        if(n == 0) break;
        for(int i = n; i > 2; i--) {
            if(!not_primes[i]) {
                if(!not_primes[n - i]) {
                    std::cout << n << " = " << n - i << " + " << i << '\n';
                    goto next;
                }
            }
        }
        std::cout << "Goldbach's conjecture is wrong.\n";
    }

    return 0;
}
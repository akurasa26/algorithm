//
// Created by jelly on 26/11/2019.
//
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
bool d[10001] = {false, };
void findSelf(int n) {
    if(n > 10000 || d[n]) return;
    int sum = n;
    do {
        sum += (n % 10);
        if(sum > 10000) {
            return;
        }
    } while((n /= 10) && n);
    findSelf(sum);
    d[sum] = true;
}

int main() {
    for(int i = 1; i <= 10000; i++) findSelf(i);

    for(int i = 1; i <= 10000; i++) if(!d[i]) cout << i << '\n';

    return 0;
}

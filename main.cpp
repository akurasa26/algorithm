#include <iostream>
#include <cmath>
using namespace std;
unsigned long long d [201];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    d[202] = 10;
    cout << d[4];
    int n, k;
    cin >> n >> k;
    d[0] = 1LL;

    cout << d[k]  << '\n';


    return 0;
}
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 9;
    int a = 0, b = 0;
    int max = 0;
    int count = 0;

    while(t--) {
        cin >> a;
        count++;
        if(a > max) {
            max = a;
            b = count;
        }
    }
    cout << max << '\n' << b;
}
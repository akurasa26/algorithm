#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int d[100000];
    int n[100000];
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n[i];
    }
    d[0] = n[0];
    for(int i = 1; i < t; i++) {
        d[i] = n[i] + d[i-1] > n[i] ? n[i] + d[i-1] : n[i];
    }
    int max = -10000;
    for(int i = 0; i < t; i++) {
        if(max < d[i]) {
            max = d[i];
        }
    }
    cout << max;
}
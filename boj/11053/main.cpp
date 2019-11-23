#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int a[1001];
    int d[1001];
    cin >> a[1];
    d[1] = 1;

    for(int i = 2; i <= n; i++) {
        cin >> a[i];
        d[i] = 1;
        for(int j = i - 1; j > 0; j--) {
            if((a[j] < a[i]) && (d[j] >= d[i])) {
                d[i] = d[j] + 1;
            }
        }
    }
    int max = 0;
    for(int i = 1; i <=n; i++) {
        if(max < d[i]) {
            max = d[i];
        }
    }
    cout << max;
}
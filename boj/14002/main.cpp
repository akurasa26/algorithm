#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int a[1001];
    int d1[1001];
    int d2[1001];
    cin >> a[1];
    d1[1] = 1;
    d2[1] = 0;
    d2[0] = 0;
    for(int i = 2; i <= n; i++) {
        cin >> a[i];
        d1[i] = 1;
        d2[i] = 0;
        for(int j = i - 1; j > 0; j--) {
            if((a[j] < a[i]) && (d1[j] >= d1[i])) {
                d1[i] = d1[j] + 1;
                d2[i] = j;
            }
        }
    }
    int maxValue = 0;
    int maxIndex = 0;
    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(count < d1[i]) {
            maxValue = a[i];
            count = d1[i];
            maxIndex = i;
        }
    }
    cout << count << '\n';
    int i = maxIndex;
    int j = 0;
    int d3[1001];
    d3[0] = 0;

    while(i != 0) {
        d3[j] = d2[i];
        i = d2[i];
        j++;
    }

    i = j;
    i--;
    while(i >= 1) {
        cout << a[d3[i - 1]];
        i--;
        cout << " ";
    }
    cout << maxValue;
}

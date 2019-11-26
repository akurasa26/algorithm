//
// Created by jelly on 26/11/2019.
//
#include <iostream>
#include <iomanip>

using namespace std;
int a[1000];
int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int n;
    cin >> n;

    while(n--) {
        int m;
        cin >> m;
        double sum = 0;
        for(int j = 0; j < m; j++) {
            cin >> a[j];
            sum += a[j];
        }

        double avg = sum / m;
        int count = 0;
        for(int j = 0; j < m; j++) {
            if(a[j] > avg) {
                count++;
            }
        }
        cout.precision(3);
        cout.setf(ios::fixed);
        cout << (100l * (double)count / m ) << "%\n";
    }

    return 0;
}

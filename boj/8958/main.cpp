//
// Created by jelly on 26/11/2019.
//
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        int count = 0;
        int sum = 0;
        for(int i = 0; i < s.size(); i++) {
            ++count;
            if(s[i] == 'O') {
                sum += count;
            }  else {
                count = 0;
            }
        }
        cout << sum << '\n';
    }

    return 0;
}
//
// Created by jelly on 29/11/2019.
//
#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int count = n;
    while(n--) {
        string str;
        cin >> str;
        int d[26] = {0, };
        int a = str[0] - 97;
        d[a] = 1;
        int before;
        for(int i = 1; i < str.size(); i++) {
            a = str[i] - 97;
            before = str[i-1] - 97;
            if(d[a] == 0) {
                d[a] = 1;
                d[before] = 2;
            } else if(d[a] == 1) {
                if(before == a) {
                    continue;
                } else {
                    d[a] = 2;
                }
            } else {
                d[a] = 3;
                break;
            }
        }
        for(int i = 0; i < 26; i++) {
            if (d[i] == 3) {
                count--;
                break;
            }
        }

    }
    cout << count << '\n';
    return 0;
}

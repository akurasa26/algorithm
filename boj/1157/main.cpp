//
// Created by jelly on 28/11/2019.
//
#include <iostream>
using namespace std;
int d[26];
int main(){
    string str;
    cin >> str;

    for(int i = 0; i < str.size(); i++) {
        int c = str[i];
        if(c > 96) {
            d[c-97]++;
        } else {
            d[c-65]++;
        }
    }

    int max = 0;
    int index = -1;
    for(int i = 0; i < 26; i++) {
        if(max < d[i]) {
            max = d[i];
            index = i;
        }
    }
    bool duplicate = false;

    for(int i = 0; i < 26; i++) {
        if(max == d[i] && index != i) {
            duplicate = true;
        }
    }
    if(duplicate) {
        cout << '?';
    } else {
        cout << (char)(index + 65);
    }
    return 0;
}
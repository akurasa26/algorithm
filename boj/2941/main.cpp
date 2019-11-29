//
// Created by jelly on 29/11/2019.
//
#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    int count = 1;
    for(int i = 1; i < str.size(); i++) {
        count++;
        char c = str[i];
        char before = str[i-1];
        if(c == '=') {
            if(before == 'c') {
                count--;
            } else if(before == 'z') {
                count--;
                if(i > 1 && str[i-2] == 'd') count--;
            } else if(before == 's') {
                count--;
            }
        }

        if(c == '-') {
            if(before == 'c') count--;
            if(before == 'd') count--;
        }
        if(c == 'j') {
            if(before == 'l') count--;
            if(before == 'n') count--;
        }
    }
    cout << count;
    return 0;
}

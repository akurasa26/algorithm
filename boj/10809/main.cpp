//
// Created by jelly on 28/11/2019.
//
#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int a = 'a';
    int z = 'z';

    for(int i = a; i <= z; i++) {
        int index = -1;
        for(int j = 0; j < str.size(); j++) {
            if(str[j] == i) {
                index = j;
                break;
            }
        }
        cout << index << ' ';
    }

    return 0;
}


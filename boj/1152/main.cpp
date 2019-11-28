//
// Created by jelly on 28/11/2019.
//

#include <iostream>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    getline(cin, str);
    int count = 0;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == ' ') count++;
    }

    if(str[0] == ' ') count--;
    if(str[str.size() - 1] == ' ') count--;
    count++;
    cout << count;
    return 0;
}
//
// Created by jelly on 04/01/2020.
//
#include <iostream>

using namespace std;
int d[1001][1001];

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    if (str1.size() < str2.size()) {
        string temp = str2;
        str2 = str1;
        str1 = temp;
    }

    for (int i = 1; i <= str2.size(); i++) {
        char cc = str2[i - 1];
        for (int j = 1; j <= str1.size(); j++) {
            char oc = str1[j - 1];
            if (cc == oc) {
                d[i][j] = d[i - 1][j - 1] + 1;
            } else d[i][j] = max(d[i - 1][j], d[i][j - 1]);
        }
    }

    int M = 0;
    for (int i = 0; i < 1001; i++) {
        for (int j = 0; j < 1001; j++) {
//            cout << d[i][j];
            M = max(M, d[i][j]);
        }
//        cout << endl;
    }

    cout << M;
    return 0;
}

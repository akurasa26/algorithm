//
// Created by jelly on 19/12/2019.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> v;


bool compare(string &a, string &b) {
    if (a.size() == b.size()) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == b[i]) continue;
            return a[i] < b[i];
        }
    }

    return a.size() < b.size();
}

int main() {
    int n;
    cin >> n;


    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        v.push_back(word);
    }

    sort(v.begin(), v.end(), compare);

    cout << v[0] << '\n';
    for (int i = 1; i < n; i++) {
        if (v[i - 1] != v[i])
            cout << v[i] << '\n';
    }

    return 0;
}


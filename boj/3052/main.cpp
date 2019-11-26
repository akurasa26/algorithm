//
// Created by jelly on 26/11/2019.
//

#include <iostream>
using namespace std;
bool d[42];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    for(int i = 0; i < 10; i++) {
        cin >> a;
        d[a % 42] = true;
    }

    int count = 0;
    for(int i = 0; i < 42; i++) {
        if(d[i]) ++count;
    }

    cout << count;
    return 0;
}